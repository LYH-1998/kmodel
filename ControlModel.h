//
// Created by 李月寒 on 2023/3/7.
//

#ifndef KMODEL_CONTROLMODEL_H
#define KMODEL_CONTROLMODEL_H

#include <ChangeStatus.h>

static const double R_MIN = 7;

static const double R_MAX = 30;

static const int CHANGE_TIME = 200;

class ControlModel {

private:

    double deltaAngle;

    double deltaDistance;

public:

    ChangeStatus navigationCorrection(EntityStatus navigationStatus, EntityStatus currentStatus);;
};


#endif //KMODEL_CONTROLMODEL_H
