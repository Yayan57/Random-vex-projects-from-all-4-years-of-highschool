#pragma config(Sensor, in1,    ,               sensorPotentiometer)
#pragma config(Sensor, in2,    ,               sensorReflection)
#pragma config(Sensor, dgtl1,  ,               sensorSONAR_cm)
#pragma config(Motor,  port1,           driver,        tmotorVex393HighSpeed_HBridge, openLoop)
#pragma config(Motor,  port7,           Flashy,        tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port8,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           arm,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          driver,        tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{ while (1==1)
	if (SensorValue(dgtl1) > 10)
	{
		motor(port1)= -vexRT[Ch2]; // port 9 is the right driver
		motor(port10)= -vexRT[Ch3];// port 10 is the left driver
}
  if (SensorValue(dgtl1) <= 10)
{
motor(port1) = 127;
 motor(port10) =127;
}

	while (1==1)
	{
	if(vexRT[Btn6D] == 1) // if button 6d is pressed ......
	{
		motor(port8)= 127;

			//......raise the arm
	}
	else if(vexRT[Btn6U] ==1) // if button 6u is pressed instead ...
	{
		motor(port8)= -127;

		 // ... lower the arm
	}
	else // if nothing is pushed...
	{
		motor(port8)= 0;

		 // ...stop the arm //... stop the scoop arm
	}

if (SensorValue(in1) ==0)
{
	motor (port8) = -127;
waitInMilliseconds(200);
}
}

//untilPotentiometerGreaterThan(2048, in2);
//untilEncoderCounts (480,dgtl3);
if(vexRT[Btn5D] == 1) // if button 6d is pressed ......
	{
		motor(port9)= 127;

			//......raise the arm
	}
	else if(vexRT[Btn5U] ==1) // if button 6u is pressed instead ...
	{
		motor(port9)= -127;

		 // ... lower the arm
	}
	else // if nothing is pushed...
	{
		motor(port9)= 0;

		 // ...stop the arm //... stop the scoop arm
	}

//untilPotentiometerGreaterThan(2048, in2);
//untilEncoderCounts (480,dgtl3);
	while (1==1)
	{
	if (SensorValue(in2) >500)
	{
	motor (port7) =127;
}

if (SensorValue (in2) <500)
{
	motor(port7)= 0;
}
}}