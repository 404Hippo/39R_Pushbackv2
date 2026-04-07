#include "main.h"
/*
Subsystems and globals such as motors, sensors, pneumatics, etc.
*/

// Motors
pros::Motor stage1(8, pros::v5::MotorGears::blue);
pros::Motor stage2(-10, pros::v5::MotorGears::green);
pros::Motor stage3(-9, pros::v5::MotorGears::green);

// Intake Stop (In Progress)
double blockDistance; // in inches
double blockTime; // in milliseconds

void checkBlock() {
        blockDistance = (intakestop.get_distance()/25.4); // convert from mm to inches
            // If the distance is less than 2 inches, start counting time. If the distance is greater than 2 inches, reset time. If the time is greater than 100 milliseconds, stop the intake.
            if (blockDistance < 2) {
                blockTime += 10;
                pros::delay(10);
            }
            else {
                blockTime = 0;
            }
            if (blockTime > 100) {
                stage2.move(0);
            }
            else {
                stage2.move(intakePower);
            }
}

// Intake
bool Score = false;
bool isLevelUp = false;

void setIntake(int intakePower){
    if (Score) {
        checkBlockActive = false;
        stage1.move(intakePower);
        stage2.move(intakePower);
        stage3.move(intakePower);
        if (isLevelUp) {
            hood.extend();
        }
        else {
            hood.retract();
        }
    }
    else {
        checkBlockActive = true;
        stage1.move(intakePower);
        stage2.move(intakePower);
        stage3.move(10);
        hood.retract();
    }
}

// Pneumatics
pros::adi::Pneumatics matchloader('G', false);
pros::adi::Pneumatics level('C', false);
pros::adi::Pneumatics wing('D', false);
pros::adi::Pneumatics intake('H', false);
pros::adi::Pneumatics middle('F', false);
pros::adi::Pneumatics hood('E', false);

// Distance Sensors
pros::Distance leftdistance(7);
pros::Distance rightdistance(5);
pros::Distance intakestop(3);