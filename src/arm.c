/*
 * arm.c
 *
 *  Created on: Sep 28, 2017
 *      Author: Carver
 *
 *  Added correct buttons: Sep 9, 2017
 *
 *   Commented: Sep 9, 2017
 */

#include "arm.h"
#include "main.h"

#include "debug.h"
extern int dbgmsk;

/*
 * process the normal functions of the arm
 * this includes:
 *   moving the arm up and down
 *   rotating the arm
 *   telescope the arm
 */
void processArm() {
  int motorLargeOutput = 0; // Moter output
  int motorSmall1Output = 0; // Moter output
}
  // We want to be able to reverse the state of the motor
    static int reverseDelay;

  if (g_reverse) {
	  MOTOR_ARM_VERTICAL = -joystickGetAnalog(1, 2);
	  MOTOR_ARM_ROTATING = -joystickGetAnalog(1, 4);

  } else {
	  MOTOR_ARM_VERTICAL = joystickGetAnalog(1, 4);
	  MOTOR_ARM_ROTATING = joystickGetAnalog(1, 2);
    }
  } else {
    motorLargeOutput = 0;
    motorSmall1Output = 0;
  }





  /* LAST YEARS CODE!
    // check to see if the up limit switch has been tripped
    if (digitalRead(LIMIT_ARM_UP_PORT)) {
      // the up limit switch has not been tripped
      // we are safe to keep moving up

      // If reverse equals true then motorOutput equals -MOTOR_MAX
      if (g_reverse) {
        motorOutput = -MOTOR_MAX;
      } else {
        // Otherwise motorOutput equals MOTOR_MAX
        motorOutput = MOTOR_MAX;
      }

      g_disable_drive = true;

      P(D_MIN, "Arm going up.\n");
    }
  } else {
    g_disable_drive = false;
  }
  */

  // Code for telescope function

    int motorSmall2Output = 0;


if (joystickGetDigital(1,8, JOY_UP))
{
motorSet(6,127);
}
else if (joystickGetDigital(1,6, JOY_DOWN))
{
motorSet(6,-127);
}
else {motorSet (6,0);}
};




  /* LAST YEARS CODE!


  if (joystickGetDigital(1, 8, JOY_DOWN)) {
    // check to see if the down limit switch has been tripped
    if (digitalRead(LIMIT_ARM_DOWN_PORT)) {
      // the downlimit switch has not been tripped
      // we are safe to keep moving down

      // If reverse equals true then motorOutput equals MOTOR_MAX
      if (g_reverse) {
        motorOutput = MOTOR_MAX;
      } else {
        // Otherwise motorOutput equals -MOTOR_MAX
        motorOutput = -MOTOR_MAX;
      }

      P(D_MIN, "Arm going down.\n");
    }
  }

  motorSet(MOTOR_ARM_PORT, motorOutput);
}
*/
