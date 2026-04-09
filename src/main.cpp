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

    pros::Task checkBlockTask([]{
        while (true) {
            checkBlock();
            pros::delay(10);
        }
    });

    pros::Task intakeTask([]{
        while (true) {
            setIntake(Intake);
            pros::delay(10);
        }
    });

}

void disabled() {}

void competition_initialize() {}

void autonomous() {
    soloAWP();
}

void opcontrol() {

	while (true) {
		// Drivetrain Control
        int leftY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
        int rightY = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
        leftMotors.move(computeY(leftY, driveConst));
        rightMotors.move(computeY(rightY, driveConst));

        // Intake Control
        Intake = (controller.get_digital(DIGITAL_R1) - controller.get_digital(DIGITAL_R2)) * 12000;

        // Score Control
        if (controller.get_digital(DIGITAL_L2)) {
            Score = true;
        } 
        else {
            Score = false;
        }

        // Wing Control
        if (controller.get_digital_new_press(DIGITAL_Y)) {
            wing.toggle();
        }

        // High Mid Cycle Control
        if (controller.get_digital_new_press(DIGITAL_L1)) {
            level.toggle();
            isLevelUp = !isLevelUp;
        }

        // Middle Descore Control
        if (controller.get_digital_new_press(DIGITAL_RIGHT)) {
            middle.toggle();
        }

        // Matchloader Control
        if(controller.get_digital_new_press(DIGITAL_A)) {
            matchloader.toggle();
        }

        pros::delay(10); // delay to save resources
	}
}