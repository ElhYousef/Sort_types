#include "sortHeader.h"
/* 
E. Yousefi
1402/5/18
sortin types
*/

int main(int argc, char *argv[])
{
	clock_t start, end;
	double execution_time;
	
	int n;
	printf("Enter the length of array, n = ");
	scanf("%d", &n);
	
	int array[n];
	get_array(array, n);
	
	printf("\nbefore sorting\n");
	print_array(array, n);


	start = clock();
//	do_bubbleSorting(array, n);	
//	do_InsertionSorting(array, n);
//	do_selectionSorting(array, n);
//	do_quickSorting(0, n-1, array);
//	do_ShellSorting(array, n);
	do_bucketSorting(array, n);					
	end = clock();
	
	printf("\nafter sorting\n");
	print_array(array, n);
	
	execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
	printf("the execution_time of sorting is %f", execution_time);
	
	return 0;
}

