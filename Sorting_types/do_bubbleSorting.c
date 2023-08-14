#include "sortHeader.h"

//void do_bubbleSorting(int array[], int length);//the same as line 4
void do_bubbleSorting(int *array, int length)
{
	int select;
	printf("\nlow to big press 1, big to low press any number\n");
	scanf("%d", &select);
	
	int i, j, temp;
	for(i = 0; i < length; i++)
		for(j = i+1; j < length; j++)
		{
			if(select == 1)
			{//this { is important,unless gets the "else" for if(array....
			
				if(array[i] > array[j])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
			else
			{
			
				if(array[i] < array[j])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
			

	if(select == 1)
		printf("\nsorting is done from lowest to biggest\n");
	else
		printf("\nsorting is done from biggest to lowest\n");
}

