// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "UpdateSmartDashboard.h"

UpdateSmartDashboard::UpdateSmartDashboard() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::smartDashboardSystem);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void UpdateSmartDashboard::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void UpdateSmartDashboard::Execute() {
	SmartDashboard::PutNumber("Right1", RobotMap::chassisRightJaguar1->GetOutputCurrent());
	SmartDashboard::PutNumber("Right2", RobotMap::chassisRightJaguar2->GetOutputCurrent());
	SmartDashboard::PutNumber("Right3", RobotMap::chassisRightJaguar3->GetOutputCurrent());
	SmartDashboard::PutNumber("Left1", RobotMap::chassisLeftJaguar1->GetOutputCurrent());
	SmartDashboard::PutNumber("Left2", RobotMap::chassisLeftJaguar2->GetOutputCurrent());
	SmartDashboard::PutNumber("Left3", RobotMap::chassisLeftJaguar3->GetOutputCurrent());
}

// Make this return true when this Command no longer needs to run execute()
bool UpdateSmartDashboard::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void UpdateSmartDashboard::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void UpdateSmartDashboard::Interrupted() {

}