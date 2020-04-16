/*****************************************************************************
* Practice examples from S.Oualline Practical C Third Edition                *
* Example: Exercise 5-5                                                      *
* Outline: Converts hours and minutes into minutes.                          *
* Author: K. Marshall Licence: GPL v2                                        *
*****************************************************************************/

#include <stdio.h>
char line[100]; /*input line */
int hours;      /* input number of hours */
int minutes;      /* input number of minutes */
int convertedtime;/* output converted time in minutes */


int main()
{
  printf("Please input the Hours and Minutes: "); /* print statement */

  fgets(line, sizeof(line), stdin);               /* fetch input from stdin */
  sscanf(line, "%d %d", &hours, &minutes);        /* store in values */

  convertedtime = ((hours * 60) + minutes);       /* convert and store */

  printf("The converted hours and minutes is %d minutes\n", convertedtime);
  return(0);
}
