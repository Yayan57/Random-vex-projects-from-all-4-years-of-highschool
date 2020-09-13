#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,           ,             tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


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
wait1Msec(2000);  //Two second Delay
  SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0;
   SensorValue[dgtl5] = 0;//Clear the left encoder value

  //While the encoders have spun less than 3 rotations...
  //while(SensorValue[dgtl1] < 1080)
  //{
    //Move Forward
    //motor[port8] = 63;
  //}


  //Stop for half a second
  //motor[port8] = 0;
  //wait1Msec(500);
// All activities that occur befo re the competition starts
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

// port 1,5,6 is the right
// port 3,4,10 is the left

motor(port8)=-127;//shoot at high right flag
wait1Msec(1300);
motor(port8)=0;


motor(port10)=  -170;
motor(port3)=  -170;
motor(port4)=  -170;
motor(port1)=  170;
motor(port5)= 170;
motor(port6)=  170;
wait1Msec(400);

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

motor(port1)=  170;
motor(port5)=  170;
motor(port6)=  170;
wait1Msec(700);

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

motor(port10)=  -170;
motor(port3)=  -170;
motor(port4)=  -170;
motor(port1)=  170;
motor(port5)=  170;
motor(port6)=  170;
wait1Msec(2500);

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
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
{ while (1==1)
	{
		motor(port10)= -vexRT[Ch2]; // port 1 is the front right driver
		motor(port3)= -vexRT[Ch2]; // port 2 is the back  right driver
		motor(port4)=  -vexRT[Ch2]; // port 9 is the front left  driver
		motor(port5)= vexRT[Ch3];// port 10 is the back  left driver
		motor(port6)= vexRT[Ch3];// port 10 is the back  left driver
		motor(port1)= vexRT[Ch3];// port 10 is the back  left driver
		{
			// .....................................................................................
			// Insert user code here.
			// .....................................................................................


			if(vexRT[Btn6D] == 1) // if button 6u is pressed lift goes up
			{
				motor(port8)= 0;

			}
			else if(vexRT[Btn6U] ==1) // if button 6d is pressed lift goes down
			{
				motor(port8)= -127;

			}
			else // if nothing is pushed...
			{
				motor(port8)= 0;

			}
			if (vexRT[Btn5D] ==1) //if button 8r is pressed elevator goes up
			{
				motor(port7) = -127;
			}
			else if (vexRT[Btn5U] ==1) // if button 8d is pressed elevator goes down
			{
				motor(port7) = 127;
			}
			else // if nothing is pushed...
			{
				motor(port7) = 0;
			}
			if(vexRT[Btn7U] == 1) // if button 5u is close claw
			{
				motor(port2)= -127;

			}
			else if(vexRT[Btn7D] ==1) // if button 5d is pressed open claw
			{
				motor(port2)= 127;

			}
			else // if nothing is pushed...
			{
				motor(port2)= 0; // nothn happens
			}
			if(vexRT[Btn8U] == 1) // if button 5u is close claw
			{
				motor(port9)= -127;

			}
			else if(vexRT[Btn8D] ==1) // if button 5d is pressed open claw
			{
				motor(port9)= 127;

			}
			else // if nothing is pushed...
			{
				motor(port9)= 0; // nothn happens
			}
		}
	}
}
