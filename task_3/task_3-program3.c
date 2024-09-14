#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0,j = 0,count = 0,ind = 0;   //declare the variable.
	char str[50],str1[20],str2[50];
	printf("Enter the String: ");  //read the main string.
	scanf("%s",str);
	printf("Enter the substring: ");  //read the sub-string.
	scanf(" %s",str1);
	printf("Enter the substring to be added: ");  	//read the replaced sub-string.
	scanf(" %s",str2);
	int len = strlen(str);  	//length calculation.
	int len1 = strlen(str2);
	for(i=0; str[i]; i++)  	//loop.
	{
		for(j=0; str1[j]; j++)
		{
			if(str[i] != str1[j])
				break;
			else
			{
				count++;  //index founded here.
				ind = i;
				i++;
			}
		}
	}
	if(count == strlen(str1))  	//this condition for sub-string is there or not in the main string.
	{
		for(i = len; i > ind ; i--)    //create space here.
		{
			str[(i + (len1 - 1))] = str[i - 1];
		}
		i = ind + 1; 	//update the index.
		while(i<=len)   	//added the replaced string.
		{
			str[i] = str2[j];
			j++;
			i++;
		}
		int len2 = strlen(str);
		str[len2] = '\0';
		printf("The Final string is \"%s\"\n",str); //output printed here.
	}
	else
		printf("The substring is NOT found in main string!\n");   //Error message here.
	return 0;
}//End of program.