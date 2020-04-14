/****************************************************************************
*
*	What does it do... Centigrade to Fahrenheit conversion
*
*	Where is the code from: Practical C - S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>
char line[100];		/*line of input data */
int centigrade;		/* */
float fahrenheit;		/* converted temp */

int main()
{

	printf("Enter the Centigrade Temperature: ");

	fgets(line, sizeof(line), stdin);	/* get input */
	sscanf(line, "%d", &centigrade);

	fahrenheit = (9/5) *  centigrade + 32;	/* converted temp */

	printf("The temperature is %f\n", fahrenheit);

	return(0);
}
