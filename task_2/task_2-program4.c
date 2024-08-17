#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare the variable.
	int i = 0,arr[256] = {0};
	//read the string and dynamic memory allocation.
	printf("Enter the String: ");
	char *str = malloc(30);
	scanf("%[^\n]",str);
	//loop.
	for (i = 0; str[i] ; i++)
	{
		//char should count and stord the array.
		arr[(unsigned char)str[i]]++;
	}
	//loop.
	for (i = 256; i > 0; i--)
	{
		//check the condition and print the occurance
		if (arr[i] > 0)
		{
			printf("%c: %d\n", i, arr[i]);
		}
	}
	printf("\n");
	//free the memory.
	free(str);
	return 0;
}

//End of program.