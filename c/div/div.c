/****************************************************************************
*
*	Incorect float results from calling int in printf from float 
*	calculation
*
*	Where is the code from: Practical C - S. Oualinne
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>

float result; 	/* Result of the divide */


int main()
{
	result = 7.0 / 22.0;

	/* incorrect call in printf */
	printf("The results is %d\n", result);

	return(0);
}
