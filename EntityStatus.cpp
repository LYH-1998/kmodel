//
// Created by 李月寒 on 2023/3/6.
//
#include <EntityStatus.h>
#include "Utils.h"

Utils utils;

EntityStatus::EntityStatus(const Localization localization, const Course course) : localization(localization),
                                                                                     course(course) {}

const Localization EntityStatus::getLocalization() const {
    return localization;
}

void EntityStatus::setLocalization(const Localization localization) {
    EntityStatus::localization = localization;
}

const Course EntityStatus::getCourse() const {
    return course;
}

void EntityStatus::setCourse(const Course course) {
    EntityStatus::course = course;
}

EntityStatus::EntityStatus() {}

EntityStatus EntityStatus::nextStatus(EntityStatus currentStatus) {
    Course nextCourse;
    Localization nextLocalization;
    EntityStatus nextStatus;
    //经纬度转换
    nextLocalization = nextStatus.updateLocalization(currentStatus.getLocalization(), currentStatus.getCourse());
    nextStatus.setLocalization(nextLocalization);
    //改变航向角
    nextCourse = nextStatus.updateCourse(currentStatus.getCourse());
    nextStatus.setCourse(nextCourse);
    return nextStatus;
}

Localization EntityStatus::updateLocalization(Localization localization, Course course) {
    //TODO: 确定转换公式
    Localization newLocalization;
    double longitudeChange = course.getVelocity() * TIME_STEP * cos(utils.toRadians(course.getPhi())) * TIME_STEP / ONE_LATITUDE;
    double latitudeChange = course.getVelocity() * TIME_STEP * sin(utils.toRadians(course.getTheta())) * TIME_STEP / ONE_LATITUDE;
    newLocalization.setLongitude(localization.getLongitude() + longitudeChange);
    newLocalization.setLatitude(localization.getLatitude() + latitudeChange);
    newLocalization.setDepth(localization.getDepth() + course.getVelocity() * cos(utils.toRadians(course.getPsi())));
    return newLocalization;
}

Course EntityStatus::updateCourse(const Course course) {
    Course newCourse;
    newCourse.setPhi(utils.toDegree(course.getAngularAcceleration() * cos(utils.toRadians(course.getPhi())) * TIME_STEP) + course.getPhi());
    newCourse.setTheta(utils.toDegree(course.getAngularVelocity() * cos(utils.toRadians(course.getTheta()))) * TIME_STEP + course.getTheta());
    newCourse.setPsi(utils.toDegree(course.getAngularVelocity() * cos(utils.toRadians(course.getPsi()))) * TIME_STEP + course.getPsi());
    newCourse.setVelocity(course.getVelocity());
    return newCourse;
}


