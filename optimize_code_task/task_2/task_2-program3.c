#include <stdio.h>
int main()
{
	int i = 0,flag = 1;  	//declare the variable.
	char ch,ch1,str[30];//memory allocation
	printf("Enter the string: ");  	//read the string.
	scanf("%[^\n]",str);
	printf("Enter the letter to be replaced: ");   //read the character should replace.
	scanf(" %c",&ch);
	printf("Enter the letter: ");   //read the replaced character.
	scanf(" %c",&ch1);
	if(ch == ch1)   	//condition both character is same.
	{
		printf("Characters are same, Nothing got replaced!\n");  	//printed here.
		printf("The Final String is %s\n",str);
		return 0;
	}
	for(i = 0; str[i]; i++)  	//loop.
	{
		if(str[i] == ch)   	//compare the character.
		{
			flag = 0;   //once matched then replaced.
			str[i] = ch1;
			printf("Replaced \'%c\' with \'%c\'!\n",ch,ch1); //output.
			printf("The Final String is %s\n",str);
			break;
		}
	}
	if(flag)   //Error output.
	{
		printf("Letter \'%c\' not found! Nothing got replaced!\n",ch);
		printf("The Final String is %s\n",str);
	}
	return 0;
}

//End of program.