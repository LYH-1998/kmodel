//
// Created by 李月寒 on 2023/3/8.
//

#include "Course.h"

double Course::getPhi() const {
    return phi;
}

void Course::setPhi(double phi) {
    Course::phi = phi;
}

double Course::getTheta() const {
    return theta;
}

void Course::setTheta(double theta) {
    Course::theta = theta;
}

double Course::getPsi() const {
    return psi;
}

void Course::setPsi(double psi) {
    Course::psi = psi;
}

double Course::getVelocity() const {
    return velocity;
}

void Course::setVelocity(double velocity) {
    Course::velocity = velocity;
}

double Course::getAngularVelocity() const {
    return angularVelocity;
}

void Course::setAngularVelocity(double angularVelocity) {
    Course::angularVelocity = angularVelocity;
}

double Course::getAcceleration() const {
    return acceleration;
}

void Course::setAcceleration(double acceleration) {
    Course::acceleration = acceleration;
}

double Course::getAngularAcceleration() const {
    return angularAcceleration;
}

void Course::setAngularAcceleration(double angularAcceleration) {
    Course::angularAcceleration = angularAcceleration;
}

Course::Course(double phi, double theta, double psi, double velocity, double angularVelocity) : phi(phi), theta(theta),
                                                                                                psi(psi),
                                                                                                velocity(velocity),
                                                                                                angularVelocity(
                                                                                                        angularVelocity) {}

Course::Course() {}