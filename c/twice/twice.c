/*****************************************************************************
*
* Take the calculation 3 * 5 , then print it and print its double
*
*	Taken from Oualline chapter 4 pp 57
*
****************************************************************************/

#include <stdio.h>

int term;	/*term used in two expressions*/
int main ()
{
	term = 3 * 5;
	printf("Twice %d is %d\n", term, 2*term);
	printf("Three times %d is %d\n", term, 3*term);
	return(0);
}
