#include <stdio.h>
#include <string.h>
static inline int fun(char str[],char str1[],int len,int len1, int ind)
{
	char str2[30];
	int i = 0,j = 0,size1 = 0,len2 = 0,k = 0;
	size1 = len - ind;
	if((ind + 1) == len)
	{
		for(j=0; j<len1; j++)
			str[len++] = str1[j];
		len2 = strlen(str);
	    len2 = '\0';
	    printf("%s\n",str);
	}
	else
	{
		for(i=0;str[i];i++)
		{
			str2[k++] = str[i];
			if(i == ind)
			{
				while(str1[j])
				{
					str2[k++] = str1[j++];
					if(j == len1)
					{
						continue;
					}
				}
			}
		}
		int len3 = strlen(str2);
		str2[len3] = '\0';
		printf("%s\n",str2);
	}
}
int main()
{
	int index = 0,i = 0,j = 0,len = 0,len1;   //declare the variable.
	char str[50],str1[20];  	//declare string size.
	printf("Enter the String: ");  //read the main string.
	scanf("%s",str);
	printf("Enter the substring: ");  	//read the sub-string we can to main string.
	scanf(" %s",str1);
	printf("Enter the index from which the substring is to be inserted: "); //read the index to add the sub-string.
	scanf("%d",&index);
	len = strlen(str);
	len1 = strlen(str1);
	if(len > index)
		fun(str,str1,len,len1,index);
	else if(len < index || len1 > len)
		printf("Index out of bound!\n");
	return 0;
}