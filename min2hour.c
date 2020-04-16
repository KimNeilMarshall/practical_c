/*****************************************************************************
* Practice examples from S.Oualline Pracitical C Third Edition
* Example: Exercise 5-6
* Outline: Takes Int as number of minutes and converts to hours & minutes
* Author: K. Marshall Licence: GPL v2
******************************************************************************/

#include <stdio.h>
char line[100]; /* Input line for conversion */
int minutes;    /* Number of minutes to be converted */
int hours;      /* Number of hours */
int remainderminutes;  /* Minutes left over */

int main(0)
{
  printf("Enter the number of minutes to be converted: ");

  fgets(line, sizeof(line), stdin);  /* Retrieve Input from user */
  sscanf(line, "%d", &minutes);

  hours = minutes / 60;
  remainderminutes = minutes % 60;

  printf("The converted time is %d hours %d minutes", hours, remainderminutes);

  return(0);
}
