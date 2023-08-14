void gather_array(int m, int length, int array2[m][length], int* array_index, int* array)
{
	int i, j, k;
	
	k = 0;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < array_index[i]; j++)
		{
			array[k] = array2[i][j];
			k++;
		}
	}
}
