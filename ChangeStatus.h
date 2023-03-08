//
// Created by 李月寒 on 2023/3/7.
//

#ifndef KMODEL_CHANGESTATUS_H
#define KMODEL_CHANGESTATUS_H

#include "EntityStatus.h"
#include "vector"

class ChangeStatus {
private:
    double sailingTime;
    std::vector<EntityStatus> eachMomentStatus;
};

#endif //KMODEL_CHANGESTATUS_H
