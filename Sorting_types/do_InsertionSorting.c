#include "sortHeader.h"

//void do_InsertionSorting(int array[], int length);//the same as line 4
void do_InsertionSorting(int *array, int length)
{
	int index, temp;
	int i, j;
	for(i = 0; i < length-1; i++)
	{
		if(array[i] > array[i+1])
		{
			temp = array[i+1];
			array[i+1] = array[i];
			array[i] = temp;
			//sorting the part of the array that is passed
			index = i;
			for(j = i-1; j >= 0; j--)
			{
				if (array[j] > array[index])
				{
					temp = array[j];
					array[j] = array[index];
					array[index] = temp;
					index = j;
				}
			}
		}
	}
	
}
