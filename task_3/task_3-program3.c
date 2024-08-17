
/* 
   program-->Add a substring after the given substring in the main string as given by the user.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    //declare the variable.
	int i = 0,j = 0,count = 0,ind = 0;
	char str[50];
	char str1[20];
	char str2[50];
	//read the main string.
	printf("Enter the String: ");
	scanf("%s",str);
	//read the sub-string.
	printf("Enter the substring: ");
	scanf(" %s",str1);
	//read the replaced sub-string.
	printf("Enter the substring to be added: ");
	scanf(" %s",str2);
	//length calculation.
	int len = strlen(str);
	int len1 = strlen(str2);
	//loop.
	for(i=0; str[i]; i++)
	{
		for(j=0; str1[j]; j++)
		{
			if(str[i] != str1[j])
			{
				break;
			}
			else
			{
			    //index founded here.
				count++;
				ind = i;
				i++;
			}
		}
	}
	//this condition for sub-string is there or not in the main string. 
	if(count == strlen(str1))
	{
	    //create space here.
		for(i = len; i > ind ; i--)
		{
			str[(i + (len1 - 1))] = str[i - 1];
		}
		//update the index.
		i = ind + 1;
		//added the replaced string.
		while(i<=len)
		{
			str[i] = str2[j];
			j++;
			i++;
		}
		int len2 = strlen(str);
		str[len2] = '\0';
		//output printed here.
		printf("The Final string is \"%s\"\n",str);
	}
	else
	{
	    //Error message here.
		printf("The substring is NOT found in main string!\n");
	}
	return 0;
}


//End of program.