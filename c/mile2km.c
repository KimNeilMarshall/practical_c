/*****************************************************************************
* Practice examples from S.Oualline Pracitical C Third Edition
* Example: Exercise 5.4
* Outline: Converts Kilometers per hour to Miles per Hour
* Author: K. Marshall Licence: GPL v2
******************************************************************************/

#include <stdio.h>
char line[100];   /* line of input data */
int kilometer;    /* number of Kilometers */
float miles;      /* number os Miles */

int main()
{
  printf("Enter the number of Kilometers: ");

  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &kilometer);

  miles = (kilometer * 0.6213712)
  printf("The number of miles per hour is: %f\n", miles);

  return(0);
}
