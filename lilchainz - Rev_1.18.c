//*!!Code automatically generated by 'ROBOTC' configuration wizard !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c" //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
// Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
// Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
bStopTasksBetweenModes = true;

// All activities that occur before the competition starts
// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
// .....................................................................................
// Insert user code here.
// .....................................................................................

motor[port1] = -127;
motor[port10] = 127;
wait1Msec(700);
motor[port1] = 0;
motor[port10] = 0;
wait1Msec(500);
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
// User control code here, inside the loop

while (true)
{
// This is the main execution loop for the user control program. Each time through the loop
// your program should update motor + servo values based on feedback from the joysticks.

// .....................................................................................
// Insert user code here. This is where you use the joystick values to update your motors, etc.
// .....................................................................................#pragma config(Motor,  port1,           frontrightdriver, tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           frontleftdriver, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           armright,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           armleft,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           liftright,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           liftleft,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           backrightdriver, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          backleftdriver, tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard           !!*///*


{ while (1==1)
	{
		motor(port1)= -vexRT[Ch2]; // port 1 is the front right driver
		motor(port2)= -vexRT[Ch3]; // port 2 is the back  right driver
		motor(port9)=  vexRT[Ch2]; // port 9 is the front left  driver
		motor(port10)= vexRT[Ch3];// port 10 is the back  left driver

	if(vexRT[Btn6U] == 1) // if button 6u is pressed lift goes up
	{
		motor(port3)= 80;
		motor(port4)= -80; // ... raise the arm

		}
	else if(vexRT[Btn6D] ==1) // if button 6d is pressed lift goes down
	{
		motor(port3)= -80;
		motor(port4)= 80; // ... lower the arm

	}
	else // if nothing is pushed...
	{
		motor(port3)= 0;
		motor(port4)= 0;// ...stop the arm

	}
	if (vexRT[Btn8U] ==1) //if button 8r is pressed elevator goes up
	{
		motor(port7) = 80;
		motor(port8) = -80; // .. raise the elevator
	}
	else if (vexRT[Btn8D] ==1) // if button 8d is pressed elevator goes down
	{
		motor(port7) = -80;
		motor(port8) = 80; // ...lower the elevator
	}
	else // if nothing is pushed...
	{
		motor(port7) = 0;
		motor(port8) = 0;  //... elevator stops
	}
		if(vexRT[Btn5U] == 1) // if button 5u is close claw
	{
		motor(port5)= 80;

	}
	else if(vexRT[Btn5D] ==1) // if button 5d is pressed open claw
	{
		motor(port5)= -80;

	}
	else // if nothing is pushed...
	{
		motor(port5)= 0; // nothn happens
}
}
}
}}
