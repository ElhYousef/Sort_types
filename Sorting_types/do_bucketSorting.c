#include "sortHeader.h"

void do_bucketSorting(int *array, int length)
{
	
	int m;
	printf("\nhow many buckets do you want?  ");
	scanf("%d", &m);
	
	int array2[m][length];
	int array_index[m];
	
	
	make_Buckets(array_index, array, length, m, array2);//or next line
//	make_Buckets_poinVer1(array_index, array, length, m, &array2[0][0]);//OK
//	make_Buckets_poinVer1(array_index, array, length, m, (int*)array2);//OK
//	make_Buckets_poinVer1(array_index, array, length, m, array2);//OK but Warning
//	make_Buckets_poinVer2(array_index, array, length, m, &array2[0][0]);//not working withot erro
	
	
	
	
	/*print the contents of each bucket:*/
	//print_array2d(m, length, array2, array_index);
	
	int i;	
	for(i = 0; i < m; i++)
	{
		do_quickSorting(0, array_index[i]-1, array2[i]);//or any other sorting method
	}
	
	gather_array(m, length, array2, array_index, array);
	
}
