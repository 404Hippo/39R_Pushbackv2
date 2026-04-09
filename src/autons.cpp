#include "main.h"
/*
Match and skills autonomous programs
*/

void soloAWP() {
    chassis.setPose(6.5, -49, -90);
    Score = false;
    level.extend();
    isLevelUp = true;
    wing.extend();
    Intake = 12000;
    chassis.moveToPoint(-0.5, -49, 2000, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPoint(35, -49, 2000, {.forwards = false, .minSpeed = 60, .earlyExitRange = 1});
    chassis.turnToHeading(-175, 750);
    matchloader.extend();
    chassis.waitUntilDone();
    chassis.setPose(leftValue, -49, -180);
    chassis.moveToPoint(49, -62.5, 2000, {.maxSpeed = 30});
    chassis.waitUntilDone();
    chassis.moveToPoint(49, -30, 1500, {.forwards = false, .maxSpeed = 70});
    chassis.waitUntilDone();
    Score = true;

}

void leftSplit() {

}

void rightSplit() {

}

void leftRush() {

}

void rightRush() {

}

void leftCounterSplit() {

}

void rightCounterSplit() {

}

void skills() {

}