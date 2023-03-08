//
// Created by 李月寒 on 2023/3/8.
//

#ifndef KMODEL_LOCALIZATION_H
#define KMODEL_LOCALIZATION_H

class Localization{
    //角度单位度
private:
    double longitude;

    double latitude;

    double depth;

public:

    Localization(double longitude, double latitude, double depth);

    Localization();

    double getLongitude() const;

    void setLongitude(double longitude);

    double getLatitude() const;

    void setLatitude(double latitude);

    double getDepth() const;

    void setDepth(double depth);

};

#endif //KMODEL_LOCALIZATION_H
