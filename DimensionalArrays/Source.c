#include <stdio.h>

void main()
{
	//Declare Variables
	int storage[20], i;
	int total = 0, average;

	//Loop to read in 20 Arrays
	for (i = 0; i < 20; i++)
	{
		printf("Please Enter Number %d:\t", i+1);
		scanf("%d", &storage[i]);

		//Add to Total
		total += storage[i];
	}

	//Find total and display
	average = total / 20;
	printf("\n\nTotal of all numbers is:\t%d", total);
	printf("\nAverage of all numbers is:\t%d", average);

	//Label for displaying arrays
	printf("\n\nArray Numbers less than average is:");

	//Loop to read in 20 Arrays
	for (i = 0; i < 20; i++)
	{
		//If numbers less than Average Display
		if (storage[i] < average)
		{
			printf("\nArray %d:\t%d", i, storage[i]);
		}
	}

	//Skip lines before end text
	printf("\n\n\n\n");
}