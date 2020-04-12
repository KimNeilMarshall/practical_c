/****************************************************************************
*
*	What does it do... Example 5-9 calculate the area of a trinagle 
*
*	Where is the code from: Practical C - S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>

char line[100];	/*line of input data */
int height;	/* triangles height */
int width;	/* triangles width */
int area;	/* tirangles area */

int main()
{
	printf("Enter width and height: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &width, &height);

	area = (width * height) / 2;
	printf("The area is %d\n", area);


	return(0);
}
