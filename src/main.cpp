#include "main.h"
#include "lemlib/api.hpp" // IWYU pragma: keep
#include <cmath>

void initialize() {
	chassis.calibrate(); // calibrate sensors
    pros::lcd::initialize(); // initialize lcd

    pros::Task distanceTask([]{
        while (true) {
            updateDistanceValues();
            pros::delay(10);
        }
    });

}
void disabled() {}

void competition_initialize() {}

void autonomous() {

}

void opcontrol() {

	while (true) {
		// Drivetrain Control
        int leftY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
        int rightY = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
        leftMotors.move(computeY(leftY, driveConst));
        rightMotors.move(computeY(rightY, driveConst));

        setIntake((controller.get_digital(DIGITAL_R1) - controller.get_digital(DIGITAL_R2)) * 127);

        if (controller.get_digital(DIGITAL_L2)) {
            Score = true;
        } 
        else{
            Score = false;
        }

        pros::delay(10);
	}
}