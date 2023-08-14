#include "sortHeader.h"

void do_selectionSorting(int *array, int length)
{
	int index, temp;
	int i, j, min;

	for(j = 0; j < length-1; j++)
	{
		min = array[j];
		index = j;
		//find the min in the remain of the array
		for(i = j+1; i < length; i++)
		{
			if(array[i] < min) 
			{
				min = array[i];
				index = i;
			}
		}

		temp = array[index];
		array[index] = array[j];
		array[j] = temp;
//		printf("\nstep%d\n",j);
//		print_array(array, length);
	}
}


