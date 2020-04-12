/****************************************************************************
*
*	What does it do... Using sscanf get a number then double it 
*
*	Where is the code from: Practical C - S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>

char line[100];	/* input line from console	*/
int value;	/* a value to doulbe */

int main()
{
	printf("Enter a value: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &value);

	printf("Twice %d is %d\n", value, value *2);

	return(0);
}
