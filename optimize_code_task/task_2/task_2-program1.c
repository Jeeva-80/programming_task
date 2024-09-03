#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0,temp = 0,flag = 0;   // declare the variable.
	char key,str[30];     //declare memory.
	printf("Enter the string: ");   //read the string.
	scanf("%[^\n]",str);
	printf("Enter the letter to be found: ");   //read the found the character.
	scanf(" %c",&key);
	for(i = 0; str[i]; i++)    //loop.
	{
		if(str[i] == key)   //compare and found the character.
		{
			flag = 1;    	//flag value updated and index stored the variable.
			temp = i;
			break;
		}
	}
	if(flag)     //print the output here.
		printf("Index of first occurrence: %d\n",temp);
	else
		printf("Letter not found in the String!\n");
	return 0;
}

//End of program.