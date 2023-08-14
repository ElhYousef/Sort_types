
void print_array2d(int m, int length, int array2[m][length], int* array_index)
{
	int i, j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < array_index[i]; j++)
		{
			printf("array2[%d][%d] = %d\n", i, j, array2[i][j]);
		}
	}
}

