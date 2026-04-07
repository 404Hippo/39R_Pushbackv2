#include "main.h"
/*
Subsystems and globals such as motors, sensors, pneumatics, etc.
*/

// Motors
pros::Motor stage1(8, pros::v5::MotorGears::blue);
pros::Motor stage2(-10, pros::v5::MotorGears::green);
pros::Motor stage3(-9, pros::v5::MotorGears::green);

// Intake Stop (In Progress)
double blockDistance;

void checkBlock() {
        blockDistance = (intakestop.get_distance()/25.4);
        if (blockDistance < 2) {
            stage2.move(0);
        }
}

// Intake
bool Score = false;
bool isLevelUp = false;

void setIntake(int intakePower){
    if (Score) {
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