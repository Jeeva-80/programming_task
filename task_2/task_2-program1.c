#include <stdio.h>
int main()
{
	int i = 0;   // declare the variable.
	char key,str[30];     //declare memory.
	printf("Enter the string: ");   //read the string.
	scanf("%[^\n]",str);
	printf("Enter the letter to be found: ");   //read the found the character.
	scanf(" %c",&key);
	for(i = 0; str[i]; i++)    //loop.
	{
		if(str[i] == key)   //compare and found the character.
		{
			printf("Index of first occurrence: %d\n",i); //output.
			return 0;
		}
	}
	printf("Letter not found in the String!\n"); //Error output.
	return 0;
}//End of program.