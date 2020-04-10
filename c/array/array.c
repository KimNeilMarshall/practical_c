/****************************************************************************
*
*	What does it do: takes an array and gives the average
*
*	Where is the code from: Pratical C - S. Oualline
*
*	K.Marshall 
*
*****************************************************************************/

#include <stdio.h>

float data[5];	/* data to average and total */
float total;	/* total of the data  */
float average;	/* average of the data */


int main()
{
	data[0] = 34.0;
	data[1] = 27.0;
	data[2] = 45.0;
	data[3] = 82.0;
	data[4] = 22.0;

	total = data[0] + data[1] + data[2] + data[3] + data[4];
	average = total / 5.0;
	printf("Total %f Average %f\n", total, average);

	return(0);
}
