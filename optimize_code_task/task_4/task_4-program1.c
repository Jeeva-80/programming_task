#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[256],str1[256];   //declare the string.
	int array[256];
	int num = 0,i=0,count = 0; //declare the variable.
	printf("Enter the string containing ASCII numbers: ");  	//read the main string.
	scanf("%[^\n]",str);
	char *s = strtok(str, " \n");  //declare the strtok(checking the space and tokens).
	while (s != NULL) //loop running with end of null.
	{
		count = atoi(s);  	//convert he ascii to integer.
		if (count >= 0 && count <= 255)  //store the integer array.
			array[num++] = count;
		s = strtok(NULL, " \n");
	}
	for (i = 0; i < num; i++)  	//loop running for integer array.
	{
		if (array[i] < 32 || array[i] > 126)  //check the non-printable character.
		{
			printf("Cannot print the string!! Non-Printable characters are included.\n");  	//Error output.
			return 0;
		}
		str1[i] = (char)array[i];  	//printable character stored here.
	}
	str1[num] = '\0';  //null.
	printf("Given string is  \"%s\"\n", str1);  //output printed here.
	return 0;
}

//End of program.