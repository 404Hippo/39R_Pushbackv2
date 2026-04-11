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
    chassis.moveToPoint(-0.5, -49, 1000, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPoint(35, -49, 2000, {.forwards = false, .minSpeed = 60, .earlyExitRange = 1});
    chassis.turnToHeading(-170, 500);
    matchloader.extend();
    chassis.waitUntilDone();
    chassis.setPose(leftValue, chassis.getPose().y, chassis.getPose().theta);
    chassis.moveToPoint(48.5, -57.5, 1500, {.maxSpeed = 50});
    chassis.waitUntilDone();
    chassis.moveToPoint(50, -25, 1000, {.forwards = false, .maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.setPose(49, -31.25, chassis.getPose().theta);
    Score = true;
    matchloader.retract();
    pros::delay(700);
    Score = false;
    chassis.turnToHeading(-70, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(20, -28, 1500, {.minSpeed = 60, .earlyExitRange = 8});
    chassis.turnToHeading(-85, 500, {.minSpeed = 60, .earlyExitRange = 8});
    chassis.moveToPoint(-15, -26, 1500, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.waitUntil(30);
    matchloader.extend();
    chassis.turnToHeading(-130, 500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(-40, -40, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-180, 750, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(-40, -30, 800, {.forwards = false, .maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.setPose(-49, -31.25, chassis.getPose().theta);
    Score = true;
    pros::delay(1000);
    Score = false;
    chassis.moveToPoint(-48.5, -60.25, 1500, {.maxSpeed = 60});
    chassis.waitUntilDone();
    chassis.moveToPoint(-49, -50, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-135, 500, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPoint(-15, -18, 1500, {.forwards = false});
    chassis.waitUntil(30);
    level.retract();
    isLevelUp = false;
    chassis.waitUntilDone();
    Intake = 9000;
    Score = true;

}

void leftSplit() {
    chassis.setPose(-6.5, -49, 90);
    Score = false;
    level.extend();
    isLevelUp = true;
    wing.extend();
    Intake = 12000;
    chassis.moveToPoint(-37, -49, 2000, {.forwards = false, .minSpeed = 60, .earlyExitRange = 1});
    chassis.turnToHeading(170, 500);
    matchloader.extend();
    chassis.waitUntilDone();
    chassis.setPose(-rightValue, chassis.getPose().y, chassis.getPose().theta);
    chassis.moveToPoint(-48.5, -59.5, 1500, {.maxSpeed = 50});
    chassis.waitUntilDone();
    chassis.moveToPoint(-50, -25, 1000, {.forwards = false, .maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.setPose(-49, -31.25, chassis.getPose().theta);
    Score = true;
    matchloader.retract();
    pros::delay(700);
    Score = false;
    chassis.turnToHeading(60, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(-28, -25, 1500, {.minSpeed = 60, .earlyExitRange = 8});
    chassis.waitUntil(15);
    matchloader.extend();
    chassis.turnToHeading(-160, 800, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPose(-15, -16, -135, 1000, {.forwards = false});
    chassis.waitUntil(1);
    level.retract();
    isLevelUp = false;
    chassis.waitUntilDone();
    Intake = 9000;
    Score = true;
    matchloader.retract();
    pros::delay(700);
    Score = false;
    chassis.moveToPoint(-38, -40, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-170, 500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(170);
    wing.retract();
    chassis.moveToPoint(-39.5, -15, 10000, {.forwards = false, .maxSpeed = 80});
    chassis.waitUntilDone();
    chassis.moveToPoint(-39, -15, 10000, {.forwards = true, .maxSpeed = 30});
    chassis.waitUntilDone();
    chassis.turnToHeading(-165, 10000);
    chassis.waitUntilDone();
}

void rightSplit() {
    chassis.setPose(6.5, -49, -90);
    Score = false;
    level.extend();
    isLevelUp = true;
    wing.extend();
    Intake = 12000;
    chassis.moveToPoint(37, -49, 2000, {.forwards = false, .minSpeed = 60, .earlyExitRange = 1});
    chassis.turnToHeading(-170, 500);
    matchloader.extend();
    chassis.waitUntilDone();
    chassis.setPose(leftValue, chassis.getPose().y, chassis.getPose().theta);
    chassis.moveToPoint(48, -59.5, 1000, {.maxSpeed = 50});
    chassis.waitUntilDone();
    chassis.moveToPoint(50, -25, 1200, {.forwards = false, .maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.setPose(49, -31.25, chassis.getPose().theta);
    Score = true;
    matchloader.retract();
    pros::delay(700);
    Score = false;
    chassis.turnToHeading(-60, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(28, -28, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(5);
    matchloader.extend();
    chassis.moveToPose(12, -12, -45, 1000);
    chassis.waitUntil(1);
    matchloader.retract();
    chassis.waitUntilDone();
    Score = true;
    Intake = -12000;
    intake.extend();
    pros::delay(750);
    Intake = -5000;
    pros::delay(1500);
    intake.retract();
    Score = false;
    chassis.moveToPoint(36, -40, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(0, 500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(100);
    wing.retract();
    chassis.moveToPoint(37, -15, 10000, {.maxSpeed = 80});
    chassis.waitUntilDone();
    chassis.moveToPoint(36, -14, 10000, {.maxSpeed = 30});
    chassis.waitUntilDone();
    chassis.turnToHeading(-30, 10000);
    chassis.waitUntilDone();


}

void leftRush() {
    chassis.setPose(-17, -51.7, 0);
    Score = false;
    level.extend();
    isLevelUp = true;
    wing.extend();
    Intake = 12000;
    chassis.moveToPoint(-24, -24, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(15);
    matchloader.extend();
    chassis.turnToHeading(40, 500, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPoint(-40, -40, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(175, 1000);
    chassis.waitUntilDone();
    chassis.setPose(-rightValue, chassis.getPose().y, chassis.getPose().theta);
    chassis.moveToPoint(-47, -60.25, 900, {.maxSpeed = 60});
    chassis.waitUntilDone();
    chassis.moveToPoint(-49, -25, 1000, {.forwards = false, .maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.setPose(-49, -31.25, chassis.getPose().theta);
    Score = true;
    pros::delay(900);
    Score = false;
    matchloader.retract();
    chassis.moveToPoint(-40, -40, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-180, 500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(180);
    wing.retract();
    chassis.moveToPoint(-41.5, -15, 10000, {.forwards = false, .maxSpeed = 80});
    chassis.waitUntilDone();
    chassis.moveToPoint(-41, -15, 10000, {.forwards = true, .maxSpeed = 30});
    chassis.waitUntilDone();
    chassis.turnToHeading(-165, 10000);
    chassis.waitUntilDone();

}

void rightRush() {
    chassis.setPose(17, -51.7, 0);
    Score = false;
    level.extend();
    isLevelUp = true;
    wing.extend();
    Intake = 12000;
    chassis.moveToPoint(24, -24, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(15);
    matchloader.extend();
    chassis.turnToHeading(-40, 500, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPoint(40, -40, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-175, 1000);
    chassis.waitUntilDone();
    chassis.setPose(leftValue, chassis.getPose().y, chassis.getPose().theta);
    chassis.moveToPoint(47, -60.25, 1100, {.maxSpeed = 60});
    chassis.waitUntilDone();
    chassis.moveToPoint(49, -25, 1000, {.forwards = false, .maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.setPose(49, -31.25, chassis.getPose().theta);
    Score = true;
    pros::delay(1100);
    Score = false;
    matchloader.retract();
    chassis.moveToPoint(58, -40, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-180, 500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(180);
    wing.retract();
    chassis.moveToPoint(59, -15, 10000, {.forwards = false, .maxSpeed = 80});
    chassis.waitUntilDone();
    chassis.moveToPoint(58.5, -15, 10000, {.forwards = true, .maxSpeed = 30});
    chassis.waitUntilDone();
    chassis.turnToHeading(-165, 10000);
    chassis.waitUntilDone();
}

void leftCounterSplit() {
    chassis.setPose(-6.5, -49, 90);
    Score = false;
    level.extend();
    isLevelUp = true;
    wing.extend();
    Intake = 12000;
    chassis.moveToPoint(-37, -49, 2000, {.forwards = false, .minSpeed = 60, .earlyExitRange = 1});
    chassis.turnToHeading(170, 500);
    matchloader.extend();
    chassis.waitUntilDone();
    chassis.setPose(-rightValue, chassis.getPose().y, chassis.getPose().theta);
    chassis.moveToPoint(-47.5, -59.5, 1000, {.maxSpeed = 50});
    chassis.waitUntilDone();
    chassis.moveToPoint(-49, -50, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(60, 1000, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.waitUntil(20);
    matchloader.retract();
    chassis.moveToPoint(-28, -25, 1500, {.minSpeed = 60, .earlyExitRange = 8});
    chassis.waitUntil(15);
    matchloader.extend();
    chassis.turnToHeading(-160, 800, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPose(-10, -15, -135, 1000, {.forwards = false});
    chassis.waitUntilDone();
    pros::delay(2500);
    level.retract();
    isLevelUp = false;
    pros::delay(1000);
    Score = true;
    pros::delay(300);
    matchloader.retract();
    Score = false;
    level.extend();
    isLevelUp = true;
    chassis.moveToPoint(-36, -40, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-170, 500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(-36, -20, 1500, {.forwards = false, .maxSpeed = 80});
    chassis.waitUntilDone();
    wing.retract();
    pros::delay(500);
    chassis.moveToPoint(-36, -35, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(-46, -45, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(1);
    wing.extend();
    chassis.turnToHeading(180, 500, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPoint(-46, -20, 500, {.forwards = false, .maxSpeed = 80});
    chassis.waitUntilDone();
    Score = true;

}

void rightCounterSplit() {
    chassis.setPose(6.5, -49, -90);
    Score = false;
    level.extend();
    isLevelUp = true;
    wing.extend();
    Intake = 12000;
    chassis.moveToPoint(37, -49, 2000, {.forwards = false, .minSpeed = 60, .earlyExitRange = 1});
    chassis.turnToHeading(-175, 500);
    matchloader.extend();
    chassis.waitUntilDone();
    chassis.setPose(leftValue, chassis.getPose().y, chassis.getPose().theta);
    chassis.moveToPoint(49, -59.5, 1000, {.maxSpeed = 50});
    chassis.waitUntilDone();
    chassis.moveToPoint(49, -50, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-60, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(20);
    matchloader.retract();
    chassis.moveToPoint(28, -28, 1500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(15);
    matchloader.extend();
    chassis.moveToPose(12, -12, -45, 1000);
    chassis.waitUntil(1);
    matchloader.retract();
    chassis.waitUntilDone();
    pros::delay(2000);
    Score = true;
    Intake = -12000;
    intake.extend();
    pros::delay(750);
    Intake = -5000;
    pros::delay(1500);
    intake.retract();
    Score = false;
    Intake = 12000;
    chassis.moveToPoint(33, -40, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.turnToHeading(-10, 500, {.minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(35, -14, 1500, {.maxSpeed = 80});
    chassis.waitUntilDone();
    wing.retract();
    pros::delay(500);
    chassis.moveToPoint(34, -35, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.moveToPoint(47, -45, 1500, {.forwards = false, .minSpeed = 60, .earlyExitRange = 4});
    chassis.waitUntil(1);
    wing.extend();
    chassis.turnToHeading(-160, 1000, {.minSpeed = 60, .earlyExitRange = 1});
    chassis.moveToPoint(48.5, -20, 500, {.forwards = false, .maxSpeed = 80});
    chassis.waitUntilDone();
    Score = true;

}

void skills() {

}

void test() {
    // set position to x:0, y:0, heading:0
    chassis.setPose(0, 0, 0);
    // move 48" forwards
    chassis.moveToPoint(0, 48, 10000);
}