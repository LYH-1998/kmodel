//
// Created by 李月寒 on 2023/3/7.
//

#include <ControlModel.h>
#include <Localization.h>
#include <Course.h>
#include <Track.h>
#include <EntityStatus.h>
#include <iostream>

ChangeStatus ControlModel::navigationCorrection(EntityStatus navigationStatus, EntityStatus currentStatus) {
    Utils utils;
    ChangeStatus changeStatus;
    deltaDistance = utils.getPointDistanceMetre(navigationStatus.getLocalization(), currentStatus.getLocalization());
    deltaAngle = utils.getAimPointCourse(navigationStatus.getLocalization(), currentStatus.getLocalization());
    if (deltaDistance >= R_MAX ){
        Track track;
        double velocity = deltaDistance / CHANGE_TIME;
        double angularVelocity = deltaAngle /CHANGE_TIME;
        Course course;
        course.setVelocity(velocity);
        course.setAngularVelocity(angularVelocity);
        currentStatus.setCourse(course);
        for (int time = 0; time < CHANGE_TIME; time = time + TIME_STEP) {
            Localization localization = currentStatus.getLocalization();
            currentStatus.updateLocalization(localization, course);
            currentStatus.updateCourse(course);
            std::cout << time << ": "
                      << "\n longitude: " << currentStatus.getLocalization().getLongitude()
                      << "\n latitude: " << currentStatus.getLocalization().getLatitude()
                      << "\n depth: " << currentStatus.getLocalization().getDepth()
                      << "\n phi: " << currentStatus.getCourse().getPhi()
                      << "\n theta: " << currentStatus.getCourse().getTheta()
                      << "\n psi: " << currentStatus.getCourse().getPsi()
                      << std::endl;
        }
    }
    return changeStatus;
}
