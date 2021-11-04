#include <stdio.h>

void main()
{
	//Declare Variables
	int storage[20], i;

	//Loop to read in 20 Arrays
	for (i = 0; i > 20; i++)
	{
		printf("Please Enter Number %d", i);
		scanf("%d", storage[i]);
	}
}