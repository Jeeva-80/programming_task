#include <stdio.h>
#include <string.h>
int main()
{
	//declare the string size.
	char str[50];
	char str1[30];
	char str2[50];
	//read the main string.
	printf("Enter the String: ");
	scanf("%s",str);
	//read the sub-string.
	printf("Enter the substring: ");
	scanf(" %s",str1);
	//read the replaced string.
	printf("Enter the substring to be replaced: ");
	scanf(" %s",str2);
	//calculate the length of string.
	int len = strlen(str);
	int len1 = strlen(str1);
	//declare variable.
	int i=0,j=0,count = 0,temp = 0;
	//loop for how many sub-string character matched in the main string.
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
				count++;
				temp = i;
				i++;
			}
		}
	}
	//not matched condition.
	if(count< len1)
	{
		//print the Error message.
		printf("The substring is NOT found in main string!\n");
		return 0;
	}
	//this condition for sub-string found in the end.
	if(str[temp] == str1[len1 - 1] && str[temp + 1] == '\0' && str1[len1] == '\0')
	{
		//declare variable.
		int i = 0,j = 0,count = 0,k = 0,len = 0,flag = 0;
		char ch;
		//loop for running the main string.
		for(i=0; str[i]; i++)
		{
			//loop running for sub-string.
			for(j=0; str1[j]; j++)
			{
				//compare the sub-string is presented in the main string.
				if(str[i] != str1[j])
				{
					//condition false break it.
					break;
				}
				else
				{
					//true means incremented count.
					count++;
					i++;
				}
			}
		}
		//update the local variable.
		i=0,j=0;
		//compare the count to sub-string length.
		if(count == strlen(str1))
		{
			//take one character variable and store the sub string first character.
			ch = str1[i];
			for(i=0; str[i]; i++) //main string loop.
			{
				//check the sub-string character in the main loop.
				if(str[i] == ch)
				{
					//condition true means replace the replaced string.
					while(str2[k])
					{
						str[i++] = str2[k++];
						flag = 1;//updated flag.
					}
					//make the index as NULL.
					if(str[i] != '0')
						str[i] = '\0';
				}
			}
			//output printed here.
			if(flag)
				printf("The Final string is \"%s\" \n",str);
		}
	}
	//this case sub-string find in the middle or starting in the string.
	else if(str[temp] != str1[len1 - 1] || str[temp + 1] != '\0' || str1[len1] == '\0')
	{
		//declare the variable.
		int i=0,j=0,key=0,k=0,temp=0,key1 = 0;
		//this loop found the sub-string then make it as zero.
		/*for(i=0; str[i]; i++)
		{
			for(j=0; str1[j]; j++)
			{
				if(str[i] != str1[j])
				{
					break;
				}
				else
				{
					str[i] = '0';
					i++;
				}
			}
		}*/
		for(i = 0; str[i]; i++)
		{
			if(str[i] == str1[j])
			{
				str[i] = '0';
				j++;
			}
			if(str[j] == '\0')
				break;
		}
		int len2 = strlen(str1);
		int len3 = strlen(str2);
		int len4 = strlen(str);
		int ret = len3 - len2;
		//condition for sub-string character lesser then replace string.
		if(len2 < len3)
		{
			//found the total zeros in the main string.
			for(i=0; str[i]; i++)
			{
				if(str[i] == '0')
				{
					key = i;
				}
			}
			i=0;
			//found the zero after how many character are there.
			for(i=key+1; str[i]; i++)
			{
				temp++;
			}
			i=0;
			//found the first zero index.
			for(i=0; str[i]; i++)
			{
				if(str[i] == '0')
				{
					key1 = i;
					break;
				}
			}
			//condition for after zero character is greater then replaced character.
			if(temp > len3)
			{
				i = 0;
				//create the space.
				for(i = 0; i < temp; i++)
				{
					str[len4] = str[len4 - 1];
					str[len4 - 1] = '0';
					len4--;
				}
				int len5 = strlen(str);
				str[len5] = '\0';
				//add the replaced string.
				while(str2[k])
				{
					str[key1] = str2[k];
					k++;
					key1++;
				}
			}
			//after zero lesser then replaced character.
			else if(temp < len3)
			{
				int count = 0;
				int cnt1 = strlen(str2);
				i = 0;
				str[len4+key+1] = '\0';
				//make the space.
				for(i = 0; i < cnt1; i++)
				{
					str[len4 + key] = str[len4 - 1];
					count++;
					len4--;
				}
				k = 0;
				//add the replaced string.
				while(str2[k])
				{
					str[key1] = str2[k];
					k++;
					key1++;
				}
			}

		}
		//both sub-string and replaced string is equal.
		else if(len2 <= len3 || len2 == len3)
		{
			int key = 0,key1 = 0;
			k = 0,i=0;
			//find the first index of zero.
			for(i=0; str[i]; i++)
			{
				if(str[i] == '0')
				{
					key = i;
					break;
				}
			}
			j=0;
			//find the total zer0.
			for(j=0; str[j]; j++)
			{
				if(str[j] == '0')
					key1++;
			}
			//add the replaced string.
			/*	for(i=key;i<=key1;i++)
				{
				        str[i] = str2[k++];
				}*/
			i=0,j=0;
			for(i=0; str[i]; i++)
			{
				if(str[i] == '0')
				{
					str[i] = str2[j];
					j++;
				}
				if(str2[j] == '\0')
					break;
			}
		}
		//sub-string greater then replaced string.
		else if(len2 > len3)
		{
			int
			i = 0,k=0;
			//found the index of zero.
			for(i=0; str[i]; i++)
			{
				if(str[i] == '0')
				{
					key = i;
					break;
				}
			}
			i = key,j = 0;
			//add the replaced string.
			while(str2[k])
			{
				str[i] = str2[k];
				k++;
				i++;
			}
			// loop for remove the zero.
			int cnt2 = strlen(str);
			for(i = 0; i < cnt2 ; i++)
			{
				if(str[i] == '0')
				{
					for(j = i; j < cnt2; j++)
					{
						str[j] = str[j+1];
					}
					cnt2--;
					i--;
				}
			}
		}
		//final output printed here.
		printf("the final string \"%s\" \n",str);
	}
}


//End of program.