#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i = 0,j = 0,temp = 0;    //declare the variable.
	printf("Enter the number of elements: ");  	//ask the user for array size.
	scanf("%d",&n);
	int *arr = malloc(sizeof(int)*n);   	//declare arrays.
	int *arr_1 = malloc(sizeof(int)*n);
	for(i = 0; i < n; i++)  	//read the array value.
	{
		printf("Enter the number %d ",i+1);
		scanf("%d",&arr[i]);   //stored in another array.
		arr_1[j++] = arr[i];
	}
	printf("\n");
	printf("The Inverted array elements are: \n");   	//print the output here.
	for(i = j - 1; i >= 0; i--)
		printf("%d\n", arr_1[i]);
	free(arr);    //free the memory.
	free(arr_1);
	return 0;
}

//End of program.
