#include <stdio.h>
int main()
{
	int i = 0,count = 0;  //declare the variable.
	char key,str[30];	//memory allocation.
	printf("Enter the string: "); //read the string.
	scanf("%[^\n]",str);
	printf("Enter the letter to be found: ");  	//read the key chracter to found.
	scanf(" %c",&key);
	for(i = 0; str[i]; i++)  	//loop.
		if(str[i] == key)  //compare the character.
			count++;  	//increment the count.
	if(count)  	//output printed here.
		printf("Number of occurrence of 'e' is %d\n",count);
	else
		printf("Letter not found in the String!");
	return 0;
}

//End of program.