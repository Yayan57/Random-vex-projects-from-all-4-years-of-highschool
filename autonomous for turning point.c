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
motor(port8)=-127;//shoot at high right flag
wait1Msec(1300);
motor(port8)=0;

motor(port10)= - 170;
motor(port3)= - 170;
motor(port4)= - 170;
motor(port1)=  170;
motor(port5)=  170;
motor(port6)=  170;
wait1Msec(1200);

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

motor(port10)=  170;
motor(port3)=  170;
motor(port4)=  170;
motor(port1)=  -170;
motor(port5)=  -170;
motor(port6)=  -170;
wait1Msec(1500);

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

motor(port10)= - 170;
motor(port3)= - 170;
motor(port4)= - 170;
wait1Msec(500);

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);

motor(port10)=  170;
motor(port3)=  170;
motor(port4)=  170;
motor(port1)=  -170;
motor(port5)=  -170;
motor(port6)=  -170;
wait1Msec(2500);

motor(port10)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port1)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);


}
