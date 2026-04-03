#pragma once
#include "main.h"

extern pros::Motor stage1;
extern pros::Motor stage2;
extern pros::Motor hood;

extern bool Score;
extern void setIntake(int intakePower);

extern pros::adi::Pneumatics matchloader;
extern pros::adi::Pneumatics level;
extern pros::adi::Pneumatics wing;
extern pros::adi::Pneumatics intake;
extern pros::adi::Pneumatics park;

extern pros::Distance leftdistance;
extern pros::Distance rightdistance;
extern pros::Distance frontdistance;