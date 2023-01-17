// RobotBuilder Version: 5.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Subsystem.

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "subsystems/Drivetrain.h"
#include <frc/smartdashboard/SmartDashboard.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Drivetrain::Drivetrain(){
    SetName("Drivetrain");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("Drivetrain");

    AddChild("RightEncoder", &m_rightEncoder);
    m_rightEncoder.SetDistancePerPulse(1.0);

    AddChild("LeftEncoder", &m_leftEncoder);
    m_leftEncoder.SetDistancePerPulse(1.0);

    AddChild("FrontEncoder", &m_frontEncoder);
    m_frontEncoder.SetDistancePerPulse(1.0);

    AddChild("SwervePodRight", &m_swervePodRight);
    m_swervePodRight.SetSafetyEnabled(true);
    m_swervePodRight.SetExpiration(0.1_s);
    m_swervePodRight.SetMaxOutput(1.0);


    AddChild("BottomMotorRight", &m_bottomMotorRight);
    m_bottomMotorRight.SetInverted(false);

    AddChild("TopMotorRight", &m_topMotorRight);
    m_topMotorRight.SetInverted(false);

    AddChild("SwervePodLeft", &m_swervePodLeft);
    m_swervePodLeft.SetSafetyEnabled(true);
    m_swervePodLeft.SetExpiration(0.1_s);
    m_swervePodLeft.SetMaxOutput(1.0);


    AddChild("BottomMotorLeft", &m_bottomMotorLeft);
    m_bottomMotorLeft.SetInverted(false);

    AddChild("TopMotorLeft", &m_topMotorLeft);
    m_topMotorLeft.SetInverted(false);

    AddChild("SwervePodFront", &m_swervePodFront);
    m_swervePodFront.SetSafetyEnabled(true);
    m_swervePodFront.SetExpiration(0.1_s);
    m_swervePodFront.SetMaxOutput(1.0);


    AddChild("FrontBottomMotor", &m_frontBottomMotor);
    m_frontBottomMotor.SetInverted(false);

    AddChild("FrontTopMotor", &m_frontTopMotor);
    m_frontTopMotor.SetInverted(false);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Drivetrain::Periodic() {
    // Put code here to be run every loop

}

void Drivetrain::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS


// Put methods for controlling this subsystem
// here. Call these from Commands.
