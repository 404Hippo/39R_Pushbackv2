#include "main.h"
/*
Subsystems and globals such as motors, sensors, pneumatics, etc.
*/

// Motors
pros::Motor stage1(20, pros::v5::MotorGears::blue);
pros::Motor stage2(-10, pros::v5::MotorGears::green);
pros::Motor hood(-8, pros::v5::MotorGears::green);

// Intake
bool Score = false;

void setIntake(int intakePower){
    if (Score) {
        stage1.move(intakePower);
        stage2.move(intakePower);
        hood.move(intakePower);
    }
    else {
        stage1.move(intakePower);
        stage2.move(intakePower);
        hood.move(0);
    }
}

// Pneumatics
pros::adi::Pneumatics matchloader('H', false);
pros::adi::Pneumatics level('F', false);
pros::adi::Pneumatics wing('E', false);
pros::adi::Pneumatics intake('D', false);
pros::adi::Pneumatics park('G', false);

// Distance Sensors
pros::Distance leftdistance(0);
pros::Distance rightdistance(0);
pros::Distance frontdistance(0);
