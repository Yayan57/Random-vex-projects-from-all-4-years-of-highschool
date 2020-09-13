#pragma config(Motor,  port1,           rightdriver,   tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           leftdriver,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           BottomRight,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           Topright,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           topleft,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           BottomLeft,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           liftright,     tmotorServoStandard, openLoop)
#pragma config(Motor,  port8,           liftleft,      tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{ while (1==1)
	{
		motor(port1)= -vexRT[Ch2]; // port 9 is the right driver
		motor(port2)= vexRT[Ch3];// port 10 is the left driver

	if(vexRT[Btn6D] == 1) // if button 6d is pressed ......
	{
		motor(port3)= 127;
		motor(port4)= 127;
		motor(port5)= -127;
		motor(port6)= -127;	//......raise the arm
	}
	else if(vexRT[Btn6U] ==1) // if button 6u is pressed instead ...
	{
		motor(port3)= -127;
		motor(port4)= -127;
		motor(port5)= 127;
		motor(port6)= 127; // ... lower the arm
	}
	else // if nothing is pushed...
	{
		motor(port3)= 0;
		motor(port4)= 0;
		motor(port5)= 0;
		motor(port6)= 0; // ...stop the arm
	}
	if (vexRT[Btn5D] ==1) //if button 5d is pressed...
	{
		motor(port7) = 127;
		motor(port8) = 127; // .. raise the scoop arm
	}
	else if (vexRT[Btn5U] ==1) // if button 5u is pressed instead...
	{
		motor(port7) = -127;
		motor(port8) = -127; // ...lower the scoop arm
	}
	else // if nothing is pushed...
	{
		motor(port7) = 0;
		motor(port8) = 0;  //... stop the scoop arm
	}
}
}
