//
// Created by 李月寒 on 2023/3/8.
//

#include "Localization.h"

double Localization::getLongitude() const {
    return longitude;
}

void Localization::setLongitude(double longitude) {
    Localization::longitude = longitude;
}

double Localization::getLatitude() const {
    return latitude;
}

void Localization::setLatitude(double latitude) {
    Localization::latitude = latitude;
}

double Localization::getDepth() const {
    return depth;
}

void Localization::setDepth(double depth) {
    Localization::depth = depth;
}

Localization::Localization(double longitude, double latitude, double depth) : longitude(longitude), latitude(latitude),
                                                                              depth(depth) {}
Localization::Localization() {}