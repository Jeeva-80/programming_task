#include <stdio.h>
int main()
{
	int i = 0,arr[256] = {0};//declare the variable.
	char str[30];
	printf("Enter the String: ");  	//read the string and dynamic memory allocation.
	scanf("%[^\n]",str);
	for (i = 0; str[i] ; i++)  	//loop.
		arr[(unsigned char)str[i]]++;  	//char should count and stord the array.
	for (i = 0; i < 256; i++)  	//loop.
		if (arr[i] > 0)   //check the condition and print the occurance
			printf("%c: %d\n", i, arr[i]);
	printf("\n");
	return 0;
}

//End of program.