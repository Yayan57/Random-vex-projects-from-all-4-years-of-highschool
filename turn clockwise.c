while (SensorValue[dgtl3] < 250)// no x for variable on this one because 250 is proven to be 90 degree turn
{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port1)=  117;
motor(port3)=  117;
motor(port4)=  117;
motor(port10)=  127;
motor(port5)=  127;
motor(port6)=  127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port1)=  127;
motor(port3)=  127;
motor(port4)=  127;
motor(port10)=  117;
motor(port5)=  117;
motor(port6)=  117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port1)=  127;
motor(port3)= 127;
motor(port4)=  127;
motor(port10)= 127;
motor(port5)=  127;
motor(port6)=  127;
}
}


motor(port1)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port10)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);
