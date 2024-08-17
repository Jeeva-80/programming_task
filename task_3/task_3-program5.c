#include <string.h>
#include <stdio.h>
int main()
{
	int i = 0,j = 0,F_ind = 0,L_ind = 0,count = 0,ret = 0;      //declare variable.
	char str[50];                                               //declare the string.
	char str1[50];
	char ch;
	printf("Enter the String: ");    //read the main string.
	scanf("%[^\n]",str);
	printf("Enter the substring: "); //read the sub-string.
	scanf(" %s",str1);
	printf("Enter the special character: "); //read the character to find.
	scanf(" %c",&ch);
	for(i = 0; str[i]; i++)                  //find the double codes index in first and last.
	{
		if(str[i++] == '"')
			F_ind = i;
		if(str[i] == '"')
			L_ind = i;
	}
	if(str[F_ind - 1] != '"')               //Error output.
	{
		printf("Special character was NOT found! Nothing got replaced.\n");
		printf("Final string is: %s\n",str);
		return 0;
	}
	int len = strlen(str);   //length calculation.
	int len1 = strlen(str1);
	for(i = F_ind; i<L_ind; i++) //find the count of char inside the main string double code.
		count++;
	ret = len1 - count;          //calculate the diff(how many to left shifting character).
	if(count == len1)            // equal character condition.
	{
		for(i = F_ind; i < L_ind ; i++)  //add the sub-string.
			str[i] = str1[j++];
	}
	else if(count < len1)        //sub-string char greater.
	{
		for (i = len; i >= F_ind + 1; i--)  //create the space.
			str[i + ret - 1] = str[i - 1];
		i=F_ind,j=0;
		while(str1[j])              //add the sub-string.
			str[i++] = str1[j++];
	}
	else if(count > len1)  // sub-string char lesser.
	{
	    for (i = F_ind;i<L_ind;i++) //find the char and make its zero.
	        str[i] = '0';
	    i=F_ind,j=0;
		while(str1[j])               //add the sub-string. 
			str[i++] = str1[j++];
			int cnt  =strlen(str);
			for(i = 0; i < cnt ; i++)     //remove the zero.
			{
				if(str[i] == '0')
				{
					for(j = i; j < cnt; j++)
						str[j] = str[j+1];
					cnt--;
					i--;
				}
			}
	}
	printf("Final string is: %s\n",str);  //the final output.
	return 0;
}