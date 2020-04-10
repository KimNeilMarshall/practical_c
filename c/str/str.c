/****************************************************************************
*
*	What does it do... Eampl of the string functionality  ex 5.2
*
*	Where is the code from: Practical C - S.Oualline
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>
#include <string.h>

char name[30];	/* first name of someone */

int main()
{
	strcpy(name, "Sam");	/*Initalise the name */
	printf("The name is %s\n", name);
	
	return(0);
}
