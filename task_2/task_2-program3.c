#include <stdio.h>
int main()
{
	int i = 0;  	//declare the variable.
	char ch,ch1,str[30];//memory allocation
	printf("Enter the string: ");  	//read the string.
	scanf("%[^\n]",str);
	printf("Enter the letter to be replaced: ");   //read the character should replace.
	scanf(" %c",&ch);
	printf("Enter the letter: ");   //read the replaced character.
	scanf(" %c",&ch1);
	if(ch == ch1)   	//condition both character is same.
	{
		printf("Characters are same, Nothing got replaced!\nThe Final String is %s\n",str);  	//printed here.
		return 0;
	}
	for(i = 0; str[i]; i++)  	//loop.
	{
		if(str[i] == ch)   	//compare the character.
		{
			str[i] = ch1;
			printf("Replaced \'%c\' with \'%c\'!\nThe Final String is %s\n",ch,ch1,str); //output.
			return 0;
		}
	}
	printf("Letter \'%c\' not found! Nothing got replaced!\nThe Final String is %s\n",ch,str);
	return 0;
}//End of program.