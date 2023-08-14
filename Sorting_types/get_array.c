#include "sortHeader.h"

void get_array(int array[], int length)
{
	int i;
	for(i = 0; i < length; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
	}
}

