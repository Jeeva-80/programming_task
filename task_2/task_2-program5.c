#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0,j = 0,count = 0,temp=1; //allocating memory size dynamically.
	char str[30],str1[30];
	printf("Enter the String 1: ");   //read the first string.
	scanf("%[^\n]",str);
	printf("Enter the string 2: ");  //read the second string.
	scanf(" %s",str1);
	for(i = 0; str[i]; i++) //compare the both string for loop.
	{
		count=0;
		for(j = 0; str1[j]; j++)
		{
			if(str[i+j] != str1[j])
				break;
			else
				count++;  //sub-string matched means count will incremented.
		}
		if(strlen(str1) == count)
			printf("Substring \'%s\' is present inside the string \'%s\'.\n",str1,str);	  //output
		else
		printf("Substring \'%s\' is NOT present inside the string \'%s\'.\n",str1,str);
	}	
	return 0;
}//End of program.