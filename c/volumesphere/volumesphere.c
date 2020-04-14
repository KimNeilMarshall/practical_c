/****************************************************************************
*
*	What does it do... calculates the volume of a sphere
*
*	Where is the code from: Practical C - S. Oualline.
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>
char line[100];	/* line of input data */
int radius;	/* radius of the sphere */
const float PI = 3.1415927;
float volume; 	/* volume calculated */


int main()
{
	printf("Enter the radius: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line," %d", &radius);

	volume = (4/3) * PI * radius * radius * radius;
	printf("The Volume is %f\n", volume);

	return(0);
}
