#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i = 0;   //declare the variable.
	printf("Enter the number of elements: ");   //ask the user for array size.
	scanf("%d",&n);
	int *a = malloc(sizeof(int)*n);   //declare array memory dynamically.
	for(i = 0; i < n; i++)      //read the array value.
	{
		printf("Enter the number %d ",i+1);
		scanf("%d",&a[i]);
		a[i] += 15;
	}
	printf("Sum of the two arrays are: \n");    //print the output.
	for(i = 0; i < n; i++)
		printf("%d\n",a[i]);
	free(a);
	return 0;
}

//End of program.
