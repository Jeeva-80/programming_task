#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//declare the string.
	char str[256];
	int array[256];
	char str1[256];
	//declare the variable.
	int num = 0,i=0,count = 0;
	//read the main string.
	printf("Enter the string containing ASCII numbers: ");
	scanf("%[^\n]",str);
	//declare the strtok(checking the space and tokens).
	char *s = strtok(str, " \n");
	while (s != NULL) //loop running with end of null.
	{
		//convert he ascii to integer.
		count = atoi(s);
		//store the integer array.
		if (count >= 0 && count <= 255)
		{
			array[num++] = count;
		}
		s = strtok(NULL, " \n");
	}
	//loop running for integer array.
	for (i = 0; i < num; i++)
	{
		//check the non-printable character.
		if (array[i] < 32 || array[i] > 126)
		{
			//Error output.
			printf("Cannot print the string!! Non-Printable characters are included.\n");
			return 0;
		}
		//printable character stored here.
		str1[i] = (char)array[i];
	}
	//null.
	str1[num] = '\0';
	//output printed here.
	printf("Given string is  \"%s\"\n", str1);
	return 0;
}

//End of program.