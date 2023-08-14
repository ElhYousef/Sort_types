int max1(int* array, int length)
{
	int max;
	int i;
	
	max = array[0];
	for(i = 1; i < length; i++)
	{
		if(array[i] > max)
			max = array[i];
	}
	return max;
}
