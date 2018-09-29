/*
 * Edited from last year
 */

#include "drivetrain.h"
#include "main.h"

#include "debug.h"
extern int dbgmsk;

void processDriveTrain() {
  int motorLargeOutput = 0;

 // static bool halfSpeed;
 // static int halfSpeedDelay;

  // We want to be able to reverse the motor; LeftShoulderDown moves it one direction
  // and RightShoulderDown moves the motor the opposite direction

  // read the button values for the wheel motors

   // check if the arm is being raised and disable the drive motors

if (joystickGetDigital(1,5, JOY_DOWN))
{
motorSet(3,127);
}
else if (joystickGetDigital(1,6, JOY_DOWN))
{
motorSet(3,-127);
}
else {motorSet (3,0);}
};




  /*
   * determine whether the robot should move at
   *  half speed
   * this state will be remembered so the robot
   *  stays in "half speed" mode until the button
   *  is activated again

  if (joystickGetDigital(1, 7, JOY_LEFT)) {
    // put in a delay of a half second
    //   in case the button was hit by accident
    if (halfSpeedDelay++ == 10) {
      // toggle the state of the speed and reset the counter
      halfSpeed = !halfSpeed;

      P(D_MIN, "Halfspeed setting: %d\n", halfSpeed);
    }
  } else {
    // the button has been released, reset the time counter
    halfSpeedDelay = 0;
  }



   * if the robot is in half speed mode, divide both motor
   *  output values by 2


  if (halfSpeed) {
    motorLOutput = (motorLOutput >> 1);
    motorROutput = (motorROutput >> 1);
  }

  if (joystickGetDigital(1, 7, JOY_RIGHT)) {
    if (reverseDelay++ == 10) {
      g_reverse = !g_reverse;

      P(D_MIN, "Drivetrain Reverse Mode: %d\n", g_reverse);
    }
  } else {
    reverseDelay = 0;
  }

  P(D_MAX, "RMotor: %d, LMotor: %d\n", motorROutput, motorLOutput);

  motorSet(MOTOR_L_WHEEL_PORT, motorLOutput);
  motorSet(MOTOR_R_WHEEL_PORT, motorROutput);
}
*/
