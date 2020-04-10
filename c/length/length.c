/****************************************************************************
*
*	What does it do... Tkes input from stdin and calculates 
*	length of string 
*
*	Where is the code from: Practical C - S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>
#include <string.h>

char line[100];		/* Line we are looking at */


int main()
{
	printf("Enter the line: ");
	fgets(line, sizeof(line), stdin);

	printf("The length of the line is: %ld\n",strlen(line));




	return(0);
}
