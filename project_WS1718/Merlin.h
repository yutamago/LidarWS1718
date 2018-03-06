//
// Created by simon on 06.03.18.
//

#ifndef PROJECT_WS1718_MERLIN_H
#define PROJECT_WS1718_MERLIN_H

#include <string>
#include "Gyro.h"

class Merlin {
public:
    Merlin();
    void aimAt(float heading, float pitch);

private:
    Gyro gyro;
//    const float maxError = 1.f;
    const std::string motorHeading = "1";
    const std::string motorPitch = "2";
    const float stepsHeading = 1.f; // TODO
    const float stepsPitch = 1.f; // TODO
    string commands;

    void addCommand(std::string command, bool lineEnd=true);
    void startMotor(std::string motor);
    void stopMotor(std::string motor);
    void moveHeadingTo(float degrees);
    std::string positionToString(int pos);
};


#endif //PROJECT_WS1718_MERLIN_H