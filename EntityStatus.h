//
// Created by 李月寒 on 2023/3/6.
//

#ifndef KMODEL_ENTITYSTATUS_H
#define KMODEL_ENTITYSTATUS_H

#include <Utils.h>
#include <Localization.h>
#include <Course.h>

static const double TIME_STEP = 1; //单位s

class  EntityStatus {
private:
    Localization localization;

    Course course;
public:
    const Localization getLocalization() const;

    void setLocalization(const Localization localization);

    const Course getCourse() const;

    void setCourse(const Course course);

    EntityStatus();

    EntityStatus(const Localization localization, const Course course);

    EntityStatus nextStatus(EntityStatus currentStatus);

    Localization updateLocalization(Localization localization, Course course);

    Course updateCourse(const Course course);
};

#endif //KMODEL_ENTITYSTATUS_H
