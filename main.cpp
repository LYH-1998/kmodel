#include <iostream>
#include <EntityStatus.h>
#include <ControlModel.h>
#include "Localization.h"
#include "Course.h"

using namespace std;

int main() {
    EntityStatus currentEntityStatus, nextEntityStatus;
    ControlModel controlModel;
    Course currrentCourse(30, 20, 50, 50, 1);
    Localization currentLocation(45, 55, 55);
    currentEntityStatus.setCourse(currrentCourse);
    currentEntityStatus.setLocalization(currentLocation);
    nextEntityStatus = currentEntityStatus.nextStatus(currentEntityStatus);
    cout << nextEntityStatus.getCourse().getPhi() << endl;
    cout << nextEntityStatus.getCourse().getTheta() << endl;
    cout << nextEntityStatus.getCourse().getPsi() << endl;
    cout << nextEntityStatus.getCourse().getVelocity() << endl;
    cout << nextEntityStatus.getCourse().getAcceleration() << endl;
    cout << nextEntityStatus.getLocalization().getLongitude()<< endl;
    cout << nextEntityStatus.getLocalization().getLatitude()<< endl;
    cout << nextEntityStatus.getLocalization().getDepth()<< endl;
    cout << "-----------control model---------------"<< endl;
    controlModel.navigationCorrection(currentEntityStatus, nextEntityStatus);
    return 0;
}


