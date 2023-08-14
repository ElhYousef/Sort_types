#include "sortHeader.h"
void make_Buckets_poinVer1(int* array_index, int* array, int length, int m, int* array2)
{
	int i, j, k;
	int min, max;
	float interval;	
	
	min = min1(array, length);
	max = max1(array, length);
	interval = (max - min)/(m - 1.0);
	
//	printf("min = %d\t, max = %d\n", min, max);
//	printf("interval = %f\n", interval);

	float a;
	a = (float)min;
	for(i = 0; i < m; i++)
	{
		k = 0;
		for(j = 0; j<length; j++)
		{
			if(array[j] >= a && array[j] < a+interval)
			{
				*((array2+i*length)+k) = array[j];
				k++;
			}
		}
		array_index[i] = k;
		a += interval;
	}
	
}

