/****************************************************************************
*
*	What does it do... Calculates perimeter of a rectangle
*
*	Where is the code from: Practical C - S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>
char line[100];		/* line of input data */
int width; 		/* width of rectangle */
int height;		/* height of rectangle */
float perimeter;	/* calculated perimeter */



int main()
{
	printf("Enter width height: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &width, &height);

	perimeter = 2 * (width + height);
	printf("The perimeter is %f\n", perimeter);

	return(0);
}
