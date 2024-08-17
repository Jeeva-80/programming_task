#include <stdio.h>
#include <stdlib.h>
int main()
{
	//declare the variable.
	int i = 0,flag = 0;
	char ch,ch1;
	//dynamic memory allocation
	char *str = malloc(30);
	//read the string.
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	//read the character should replace. 
	printf("Enter the letter to be replaced: ");
	scanf(" %c",&ch);
	//read the replaced character.
	printf("Enter the letter: ");
	scanf(" %c",&ch1);
	//condition both character is same.
	if(ch == ch1)
	{
		//printed here.
	    printf("Characters are same, Nothing got replaced!\n");
            printf("The Final String is %s\n",str);
            return 0;
	}
	//loop.
	for(i = 0; str[i]; i++)
	{
		//compare the character.
		if(str[i] == ch)
		{
			//once matched then replaced.
			flag = 1;
			str[i] = ch1;
		}
	}
	//output printed here.
	if(flag)
	{
		printf("Replaced \'%c\' with \'%c\'!\n",ch,ch1);
		printf("The Final String is %s\n",str);
	}
	else
	{
	    printf("Letter \'%c\' not found! Nothing got replaced!\n",ch);
            printf("The Final String is %s\n",str);
	}
	//free the memeory.
	free(str);
	return 0;
}

//End of program.