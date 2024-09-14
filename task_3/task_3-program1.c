#include <stdio.h>
#include <string.h>
int main()
{
	int index = 0,i = 0,j = 0;   //declare the variable.
	char str[50],str1[50];  	//declare string size.
	printf("Enter the String: ");  //read the main string.
	scanf("%s",str);
	printf("Enter the substring: ");  	//read the sub-string we can to main string.
	scanf(" %s",str1);
	printf("Enter the index from which the substring is to be inserted: "); //read the index to add the sub-string.
	scanf("%d",&index);
	int len = strlen(str);  	//calculate the length of main and sub-string.
	int len1 = strlen(str1);
	if(len > index)
	{
		for(i = len; i >= index; i--)  //this loop am create the space.
			str[i + len1 - 1] = str[i - 1];
		i = 0;  	//update the i(it will move to zero index).
		for(i = index; i <= len; i++)  //this loop am adding the sub-string.
		{
			str[i] = str1[j];
			j++;
		}
		int len2 = strlen(str);  	//this case am finding and add the null character.
		str[len2] = '\0';
		printf("Final string is %s\n",str);  	//print the output here.
	}
	else
		printf("Index out of bound!\n");   //Error output printed here.
}//End of program.