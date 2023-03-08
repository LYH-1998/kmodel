//
// Created by 李月寒 on 2023/3/8.
//

#ifndef KMODEL_COURSE_H
#define KMODEL_COURSE_H


class Course {
private:
    //与x轴角度,单位度
    double phi;

    //与y轴角度
    double theta;

    //与z轴角度
    double psi;

    double velocity;

    double angularVelocity;

    double acceleration;

    double angularAcceleration;

public:

    Course(double phi, double theta, double psi, double velocity, double angularVelocity);

    Course();

    double getAcceleration() const;

    void setAcceleration(double acceleration);

    double getAngularAcceleration() const;

    void setAngularAcceleration(double angularAcceleration);

    double getVelocity() const;

    void setVelocity(double velocity);

    double getAngularVelocity() const;

    void setAngularVelocity(double angularVelocity);

    double getPhi() const;

    void setPhi(double phi);

    double getTheta() const;

    void setTheta(double theta);

    double getPsi() const;

    void setPsi(double psi);

};

#endif //KMODEL_COURSE_H
