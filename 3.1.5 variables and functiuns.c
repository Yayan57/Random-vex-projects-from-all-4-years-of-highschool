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
#pragma config(Motor,  port10,           ,             tmotorVex393_HBridge, openLoop)


task main()
{
	while (1==1)
	{
		LEDControl();
	}
}
void LEDControl()
{
	if (SensorValue(dgtl1)==1)
	{
		turnLEDOn(dgtl12);
	}
	else
	{
		turnLEDOff(dgtl12);
	}
	}
{int motorCount;
motorCount = 0;
while (motorCount < 3)
{
	startMotor(port1, 95);
	waitInMilliseconds(2000);
	stopMotor(port1);
	waitInMilliseconds(2000);
	motorCount = motorCount + 1;
{int biggest;
	while(1==1)
	{biggest=0;
		while(SensorValue(dgtl1)==0)
		{
			if (SensorValue(in2)>biggest)
			{
				biggest= SensorValue(in2);
			}
		}
	}
}
}}
