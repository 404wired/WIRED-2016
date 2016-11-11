#pragma config(Motor,  port9,           leftwheel,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           arm,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port2,           rightwheel,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
#define MAX_SPEED 100


void drive()  //We are trying to drive the robot
{
  //int forward_drive;
  motor[port2] = vexRT[Ch2];
  motor[port9] = vexRT[Ch3];
  //if (forward_drive == 1)
  //  forward_drive=1;
	//else
  //  forward_drive=0;
}

void arm_motor()
{
	//	int arm;
  //motor[port4] = vexRT[Btn6U];
	//motor[port4] = vexRT[Btn6D];

	if (vexRT[Btn6U] == 1)
	{
      motor[port4] = 100;
  }
	else if (vexRT[Btn6D] == 1)
	{
	    motor[port4] = -100;
	}
	else
	{
      motor[port4] = 0;
	}
}



task main()
{
 //int forward_drive;
 //int arm;
 	while (1)
 	{
 		arm_motor();
 		drive();
 	}
}
