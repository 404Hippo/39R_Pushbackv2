#pragma once
#include "api.h"

extern pros::Motor stage1;
extern pros::Motor stage2;
extern pros::Motor stage3;

extern double blockDistance;
extern int blockTime;
extern bool checkBlockActive;
extern bool isBlocked;
extern void checkBlock();

extern bool Score;
extern bool isLevelUp;
extern int Intake;
extern void setIntake(int intakePower);

extern pros::adi::Pneumatics matchloader;
extern pros::adi::Pneumatics level;
extern pros::adi::Pneumatics wing;
extern pros::adi::Pneumatics intake;
extern pros::adi::Pneumatics middle;
extern pros::adi::Pneumatics hood;

extern pros::Distance leftdistance;
extern pros::Distance rightdistance;
extern pros::Distance intakestop;