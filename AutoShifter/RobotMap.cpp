// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
DoubleSolenoid* RobotMap::chassisShifter = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::chassisLeftJaguar1 = NULL;
CANJaguar* RobotMap::chassisRightJaguar1 = NULL;
CANJaguar* RobotMap::chassisLeftJaguar2 = NULL;
CANJaguar* RobotMap::chassisRightJaguar2 = NULL;
CANJaguar* RobotMap::chassisLeftJaguar3 = NULL;
CANJaguar* RobotMap::chassisRightJaguar3 = NULL;
TripleMotor* RobotMap::chassisLeftDrive = NULL;
TripleMotor* RobotMap::chassisRightDrive = NULL;
RobotDrive* RobotMap::chassisRobotDrive = NULL;

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	chassisShifter = new DoubleSolenoid(1, 2, 6);      
	
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	chassisRightJaguar1 = new CANJaguar(2);
	chassisRightJaguar2 = new CANJaguar(3);
	chassisRightJaguar3 = new CANJaguar(4);
	chassisLeftJaguar1 = new CANJaguar(5);
	chassisLeftJaguar2 = new CANJaguar(6);
	chassisLeftJaguar3 = new CANJaguar(7);
	chassisRightDrive = new TripleMotor(chassisRightJaguar1,
							chassisRightJaguar2,chassisRightJaguar3);
	
	chassisLeftDrive = new TripleMotor(chassisLeftJaguar1,
							chassisLeftJaguar2,chassisLeftJaguar3);
	
	chassisRobotDrive = new RobotDrive(chassisLeftDrive, chassisRightDrive);
	
	chassisRobotDrive->SetSafetyEnabled(false);
        chassisRobotDrive->SetExpiration(0.1);
        chassisRobotDrive->SetSensitivity(0.5);
        chassisRobotDrive->SetMaxOutput(1.0);
}