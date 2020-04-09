/****************************************************************************
*
*	Incorrect usage of fractions in floating point calculations example
*
*	Where is the code from: Cow Book - Practical C S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>

float answer; /*result of the calculation*/


int main()
{

	/*gives false answer from non decimal number input*/
	answer = 1/3;
	printf("The value of 1/3 is %f\n", answer);

	return(0);
}
