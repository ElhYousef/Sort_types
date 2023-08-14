#include "sortHeader.h"

void do_ShellSorting(int *array, int length)
{
	int gap;
	int mazrabe_2 = 2;
	int i, j, temp, index;
	
	for(gap = length/mazrabe_2; gap >= 1; gap /= 2)
	{
		for(i = 0; i<length-gap; i++)
		{
			if(array[i] > array[i+gap])
			{
				temp = array[i];
				array[i] = array[i+gap];
				array[i+gap] = temp;
				//next lines, like insertion sort:
				index = i;
				for(j = i-gap; j >= 0; j -= gap)
				{
					if (array[j] > array[index])
					{
						temp = array[j];
						array[j] = array[index];
						array[index] = temp;
					}
					index = j;
				}
				//end of insertion sort_like
			}	
		}
		printf("\ngap = %d\n", gap);
		print_array(array, length);
	}
	
}

