/*****************************************************************************
*
*
* Assessthe simple operators functions in C.
*
* copied from S.Oualine's book chp 4 p50-51
*
*
*****************************************************************************/

#include <stdio.h>

int temp;

int main ()
{
	/* assign temp a value as given and print the explaining text 
	and the answer*/
	printf("\n (1 + 2) * 4 = ");
	temp = (1 + 2) * 4;
	printf("%d\n",temp);
	
	/* assign temp a differnt answer and again print the explaining 
	text and answer */

	printf(" where as \n 1 + 2 * 4 = ");
	temp = ( 1 + 2 * 4 );
	printf ("%d\n",temp);

	return(0);
}
