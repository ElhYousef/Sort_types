int min1(int* array, int length)
{
	int min;
	int i;
	
	min = array[0];
	for(i = 1; i < length; i++)
	{
		if(array[i] < min)
			min = array[i];
	}
	return min;
}
