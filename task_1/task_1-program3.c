#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i = 0,sum = 0;   //declare the variable.
	printf("Enter the number of elements: ");   //ask the user for array size.
	scanf("%d",&n);
	int *arr = malloc(sizeof(int)*n);    //declare arrays memory dynamically.
	int *arr_1 = malloc(sizeof(int)*n);
	for(i = 0; i < n; i++)    //read the first array value.
	{
		printf("Enter the number %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i = 0; i < n; i++)  //read the second array value.
	{
		printf("Enter the number %d ",i+1);
		scanf("%d",&arr_1[i]);
	}
	printf("Sum of the two arrays are: \n");  //output.
	for(i=0; i<n; i++)
	{
		sum = arr[i] + arr_1[i];
		printf("%d\n",sum);
	}
	free(arr);  //free the memory.
	free(arr_1);
	return 0;
}

//End of program.
