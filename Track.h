//
// Created by 李月寒 on 2023/3/7.
//

#ifndef KMODEL_TRACK_H
#define KMODEL_TRACK_H

#include <vector>
#include <EntityStatus.h>

class Track {
private:
    std::vector<EntityStatus> navigationStatus;
    std::vector<EntityStatus> actualStatus;
};


#endif //KMODEL_TRACK_H
