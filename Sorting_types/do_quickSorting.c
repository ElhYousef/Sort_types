#include "sortHeader.h"

void do_quickSorting(int firstIndex, int endIndex, int *array)
{
	int pivot, L_index, R_index;
	int temp;
	
	if(firstIndex >= endIndex)
		return;
	
	L_index = firstIndex;
	R_index = endIndex;
	pivot = L_index;
	
	while(L_index != R_index)
	{
		if(array[L_index] > array[R_index])
		{
			temp = array[L_index];
			array[L_index] = array[R_index];
			array[R_index] = temp;
			
			if(pivot == L_index)
				pivot = R_index;
			else
				pivot = L_index;
		}
		
		if(L_index != pivot)
			L_index++;
		else if(R_index != pivot)
			R_index--;
	}
	do_quickSorting(firstIndex, pivot-1, array);
	do_quickSorting(pivot+1, endIndex, array);	
}

