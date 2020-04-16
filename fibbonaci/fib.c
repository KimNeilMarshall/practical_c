/*****************************************************************************
* Practice examples from S.Oualline Pracitical C Third Edition
* Example:
* Outline:
* Author: K. Marshall Licence: GPL v2
******************************************************************************/

#include <stdio.h>
int old_number;      /* previous Fibonacci number */
int current_number;  /* current Fibonacci number */
int next_number;     /* next Fibonacci number */

int main()
{
  /* starting things */
  old_number = 1;
  current_number = 1;

  printf("1\n"); /* prints first number */

  while (current_number < 100) {

    printf("%d\n", current_number );
    next_number = current_number + old_number;

    old_number = current_number;
    current_number = next_number;
  }

  return(0);
}
