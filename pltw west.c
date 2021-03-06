#pragma config(Sensor, in1,    ,               sensorLineFollower)
#pragma config(Sensor, in2,    ,               sensorPotentiometer)
#pragma config(Sensor, in3,    ,               sensorReflection)
#pragma config(Sensor, dgtl1,  ,               sensorTouch)
#pragma config(Sensor, dgtl2,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl4,  ,               sensorSONAR_inch)
#pragma config(Sensor, dgtl6,  ,               sensorDigitalIn)
#pragma config(Sensor, dgtl2,  ,               sensorTouch)
#pragma config(Sensor, dgtl3,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ,               sensorSONAR_inch)
#pragma config(Sensor, dgtl12, ,               sensorLEDtoVCC)
#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,            ,             tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port4,            ,             tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port9,           ,             tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int dgtl1;
	dgtl1 = 0;
	while (dgtl1 < 3)
	{
		startMotor (port1,95);
		waitInMilliseconds(2000);
		stopMotor(port1);
		waitInMilliseconds(2000);
		dgtl1 = dgtl1 +1;

	clearTimer(T1);
	while (time1 (T1) <5000)
	{
		turnLEDOn(dgtl12);
		waitInMilliseconds(2000);
		turnLEDOff(dgtl12);
		waitInMilliseconds(2000);
}
	while (1==1)
	{
		if (SensorValue(in3)>700)
	{
		turnFlashlightOn(port4, 127);
	}
	if(SensorValue(in3) <= 700)
	{
		turnFlashlightOff(port4);
	}

	startMotor(port1, 63);
	startMotor(port10, 63);
	untilSonarLessThan(20, dgtl4);
	waitInMilliseconds(2000);
	stopMotor (port1);
	stopMotor(port10);
	turnLEDOn (dgtl12);
	waitInMilliseconds(2000);
	turnLEDOff (dgtl12);

setServo(port2, 127);
untilLight(1425, in1);
setServo(port2,-127);
waitInMilliseconds(2000);

	turnLEDOn(dgtl12);
	untilPotentiometerGreaterThan(2048, in2);
	turnLEDOff(dgtl12);
	startMotor(port1, 63);
	waitInMilliseconds(3000);
	stopMotor(port1);

	startMotor(port1, 127);
startMotor(port10, 127);
untilEncoderCounts (480,dgtl3);
stopMotor(port1);
stopMotor(port10);

setServo(port2, 127);
untilLight(1425, in1);
setServo (port2, -127);
waitInMilliseconds (2000);

startMotor(port10, 127);
startMotor(port1, 127);
untilSonarLessThan(20, dgtl4);
stopMotor(port1);
stopMotor(port10);

turnLEDOn(dgtl12);
waitInMilliseconds(6250);
turnLEDOff(dgtl12);


	untilBump(dgtl1);
	startMotor(port9, 127);
	waitInMilliseconds(1000);
	stopMotor(port10);
turnLEDOn (dgtl12);
waitInMilliseconds(200);
turnLEDOff(dgtl12);
waitInMilliseconds(200);
turnLEDOn (dgtl12);
waitInMilliseconds(200);
turnLEDOff(dgtl12);
waitInMilliseconds(200);
turnLEDOn (dgtl12);
waitInMilliseconds(200);
turnLEDOff(dgtl12);
turnLEDOn (dgtl12);
waitInMilliseconds(200);
turnLEDOff(dgtl12);
waitInMilliseconds(200);
turnLEDOn (dgtl12);
waitInMilliseconds(200);
turnLEDOff(dgtl12);
turnLEDOn (dgtl12);
waitInMilliseconds(200);
turnLEDOff(dgtl12);
waitInMilliseconds(200);
turnLEDOn (dgtl12);
waitInMilliseconds(200);
turnLEDOff(dgtl12);


motor (port1)=127;
motor (port10)=127;
waitInMilliseconds(1000);


} }}
