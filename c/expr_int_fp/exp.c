/*****************************************************************************
*
*	Expression example from Cow book Oualline chp 4 page 58
*
*
*	K. Marshall
*
*
*****************************************************************************/

#include <stdio.h>
int integer; /* An interger  */
float floating; /* A floating point number */

int main()
{
	/*shows correct floating point number*/
	floating = 1.0 / 2.0; 
	printf("float = %f\n", floating);

	/*doesnt give error but is incorrect gives 0*/
	integer = 1 / 3;
	printf("integer = %d\n",integer);

	/*incorrect input gives 0.0 float must have decimal*/
	floating = 1/2 + 1/2;
	printf("float = %f\n", floating);

	/*correct output */
	floating = 3.0 / 2.0;
	printf("float = %f\n", floating);

	/*can't convert float to int  */
	integer = floating;
	printf("integer = floating gives:%d\n\n",integer);

	return(0);
}
