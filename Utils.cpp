//
// Created by 李月寒 on 2023/3/6.
//

#include "Utils.h"
#include "Localization.h"

double Utils::toRadians(const double degree) {
    return degree * PI / 180;
}

double Utils::toDegree(const double radian) {
    return radian * 180 /PI;
}

double Utils::getPointDistanceMetre(Localization startPoint, Localization endPoint) {
    double planeDistance = sqrt(
            pow(startPoint.getLongitude() - endPoint.getLongitude(), 2) +
            pow(startPoint.getLatitude() - endPoint.getLatitude(), 2)
    ) * ONE_LATITUDE;
    return sqrt(planeDistance * planeDistance + pow(startPoint.getDepth() - endPoint.getDepth(), 2));
}

//返回单位度
double Utils::getAimPointCourse(Localization startPoint, Localization endPoint) {
    double course = atan2(startPoint.getLongitude() - endPoint.getLongitude(),
                          startPoint.getLatitude() - endPoint.getLatitude()) * 180 / PI;
    if (course < 0) {
        course += 360;
    }
    return course;
}


