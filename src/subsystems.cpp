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
int blockTime; // in milliseconds
bool checkBlockActive = false;
bool isBlocked = false;

void checkBlock() {
    if (checkBlockActive) {
        blockDistance = (intakestop.get_distance()/25.4); // convert from mm to inches
            // If the distance is less than 2 inches, start counting time. If the distance is greater than 2 inches, reset time. If the time is greater than 100 milliseconds, stop the intake.
            if (blockDistance < 2) {
                blockTime += 10;
            }
            else {
                blockTime = 0;
            }

            isBlocked = (blockTime > 100);
        }
    else {
        blockTime = 0;
        isBlocked = false;
    }
}

// Intake
bool Score = false;
bool isLevelUp = false;
int Intake = 0;

void setIntake(int intakePower){
    if (Score) {
        checkBlockActive = false;
        stage1.move_voltage(intakePower);
        stage2.move_voltage(intakePower);
        stage3.move_voltage(intakePower);
        if (isLevelUp) {
            hood.extend();
        }
        else {
            hood.retract();
        }
    }
    else {
        checkBlockActive = true;
        stage1.move_voltage(intakePower);
        if (isBlocked) {
            stage2.move_voltage(0);
        }
        else {
            stage2.move_voltage(intakePower);
        }
        stage3.move_voltage(1000);
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