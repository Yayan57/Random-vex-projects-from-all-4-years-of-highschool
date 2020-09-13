#pragma config(Sensor, dgtl1,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  ,               sensorQuadEncoder)
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
task main()
{
SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0;

while (SensorValue[dgtl1] < 360)
{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port10)=  -117;
motor(port3)=  -117;
motor(port4)=  -117;
motor(port1)= 127;
motor(port5)=  127;
motor(port6)=  127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port10)=  -127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port1)= 117;
motor(port5)=  117;
motor(port6)= 117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port10)=  -127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port1)=  127;
motor(port5)=  127;
motor(port6)=  127;
}
}
motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

motor(port8)=-127;//shoot at high right flag
wait1Msec(2000);
motor(port8)=0;

SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0;

while (SensorValue[dgtl1] < 600)
{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port10)=  -117;
motor(port3)=  -117;
motor(port4)=  -117;
motor(port1)= 127;
motor(port5)=  127;
motor(port6)=  127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port10)=  -127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port1)= 117;
motor(port5)=  117;
motor(port6)= 117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port10)=  -127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port1)=  127;
motor(port5)=  127;
motor(port6)=  127;
}
}
motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] =0;

while (SensorValue[dgtl1] > -1700)
{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port10)=  117;
motor(port3)=  117;
motor(port4)=  117;
motor(port1)= -127;
motor(port5)=  -127;
motor(port6)=  -127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port10)=  127;
motor(port3)=  127;
motor(port4)=  127;
motor(port1)= -117;
motor(port5)=  -117;
motor(port6)= -117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port10)=  127;
motor(port3)=  127;
motor(port4)=  127;
motor(port1)=  -127;
motor(port5)=  -127;
motor(port6)=  -127;
}
}
motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] =0;

while (SensorValue[dgtl3] > -250)
{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port10)= - 117;
motor(port3)=  -117;
motor(port4)=  -117;
motor(port1)=  -127;
motor(port5)=  -127;
motor(port6)=  -127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port10)=  -127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port1)=  -117;
motor(port5)=  -117;
motor(port6)=  -117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port10)= - 127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port1)= -127;
motor(port5)= - 127;
motor(port6)=  -127;
}
}


motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] =0;

while (SensorValue[dgtl1] > 1720)
{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port10)=  -117;
motor(port3)=  -117;
motor(port4)=  -117;
motor(port1)=  127;
motor(port5)=  127;
motor(port6)=  127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port10)= - 127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port1)=  117;
motor(port5)=  117;
motor(port6)=  117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port10)= - 127;
motor(port3)=  -127;
motor(port4)= -127;
motor(port1)=  127;
motor(port5)=  127;
motor(port6)=  127;
}
}

SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0;

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);
}
