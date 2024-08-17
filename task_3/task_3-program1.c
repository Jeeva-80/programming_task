

#include <stdio.h>
#include <string.h>
int main()
{
    //declare the variable.
	int index = 0,i = 0,j = 0;
	//declare string size.
	char str[50];
	char str1[50];
	//read the main string.
	printf("Enter the String: ");
	scanf("%s",str);
	getchar();
	//read the sub-string we can to main string.
	printf("Enter the substring: ");
	scanf("%s",str1);
	//read the index to add the sub-string.
	printf("Enter the index from which the substring is to be inserted: ");
	scanf("%d",&index);
	//calculate the length of main and sub-string.
	int len = strlen(str);
	int len1 = strlen(str1);
	if(len > index)
	{
		//this loop am create the space.
		for(i = len; i >= index; i--)
		{
			str[i + len1 - 1] = str[i - 1];

		}
		//update the i(it will move to zero index).
		i = 0;
		//this loop am adding the sub-string.
		for(i = index; i <= len; i++)
		{
			str[i] = str1[j];
			j++;
		}
		//this case am finding and add the null character.
		int len2 = strlen(str);
		str[len2] = '\0';
		//print the output here.
		printf("Final string is %s\n",str);
	}
	else
	{
	    //Error output printed here.
		printf("Index out of bound!\n");
	}
}

//End of program.