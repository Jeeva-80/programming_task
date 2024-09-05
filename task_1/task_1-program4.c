#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i = 0,key = 0,flag = 1;   //declare variable.
	printf("Enter the number of elements of arrays: "); 	//ask the user for array size.
	scanf("%d",&n);
	int *arr = malloc(sizeof(int)*n);   	//declare the array memory dynamically.
	for(i = 0; i < n; i++)    	//read the array index value from the user.
	{
		printf("Enter the number %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be found: ");   //Enter the array value that you can find.
	scanf("%d",&key);
	for(i=0; i<n; i++)
	{
		if(arr[i] == key)   //compare the key value.
		{
			printf("Number was found at index %d\n",i);   //output.
			flag = 0;
			break;
		}
	}
	if(flag)
		printf("Number was NOT found\n");   //Error message.
	free(arr);  //free the memory.
}

//End of program.
