/****************************************************************************
*
*	What does it do... Plays with strings and concatenates them...
*
*	Where is the code from: Practical C - S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>
#include <string.h>

char first[100];	/* first name */
char last[100]; 	/* last name */
char full_name[200];	/* full name */

int main()
{

	strcpy(first, "Spunge Bob");	/* Initialise first name */
	strcpy(last, "Squarepants");	/* Init. last name  */

	strcpy(full_name, first);	/* full = "Spunge Bob" */
		/* Note strcat */
	strcat(full_name, " ");		/*full = "Spunge Bob " */
 	strcat(full_name, last);	/*full = "Spunge Bob Spuarepants" */

	printf("The full name is %s\n", full_name);
	return(0);
}
