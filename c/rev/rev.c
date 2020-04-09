/****************************************************************************
*
*	Takes three character and then prints them  and prints 
*	again reversed
*
*	Where is the code from: Practical C  - S. Oualinne
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>

char char1; 	/* first character */
char char2;	/* second character */
char char3;	/* third character */

int main()
{
	/* Input the values of the various characters NOTE: the '' */
	char1 = 'A';
	char2 = 'B';
	char3 = 'C';

	printf("%c%c%c reversed is %c%c%c\n",
		char1, char2, char3,
		char3, char2, char1);

	return(0);
}
