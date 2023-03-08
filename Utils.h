//
// Created by 李月寒 on 2023/3/6.
//

#ifndef KMODEL_UTILS_H
#define KMODEL_UTILS_H

#include <Course.h>
#include <cmath>
#include "Localization.h"

#define PI acos(-1)

static const int ONE_LATITUDE = 111000;

class Utils {
public:
    static double toRadians(const double degree) ;

    static double toDegree(const double radian) ;

    double getPointDistanceMetre(Localization startPoint, Localization endPoint);

    double getAimPointCourse(Localization startPoint, Localization endPoint);
};


#endif //KMODEL_UTILS_H
