#include <stdio.h>
#include <stdlib.h>
int main()
{
	//declare the variable.
	int i = 0,count = 0;
	char key;
	//dynamic memory allocation.
	char *str = malloc(30);
	//read the string.
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	//remove the input buffer.
	getchar();
	//read the key chracter to found.
	printf("Enter the letter to be found: ");
	scanf("%c",&key);
	//loop.
	for(i = 0; str[i]; i++)
	{
		//compare the character.
		if(str[i] == key)
		{
			//increment the count.
			count++;
		}
	}
	//output printed here.
	if(count)
		printf("Number of occurrence of 'e' is %d\n",count);
	else
		printf("Letter not found in the String!");
	//free the memory.
	free(str);
	return 0;
}
