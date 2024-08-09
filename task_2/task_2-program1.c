#include <stdio.h>
#include <stdlib.h>
int main()
{
    // declare the variable here.
    int i = 0,temp = 0,flag = 0;
    char key;
    //dynamic allocation memory.
    char *str = malloc(30);
    //read the string.
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    //remove the input buffer.
    getchar();
    //read the found the character.
    printf("Enter the letter to be found: ");
    scanf("%c",&key);
    //loop.
    for(i = 0;str[i];i++)
    {
	    //compare and found the character.
        if(str[i] == key)
        {
		//flag value updated and index stored the variable.
            flag = 1;
            temp = i;
        }
    }
    //print the output here.
    if(flag)
    {
        printf("Index of first occurrence: %d\n",temp);
    }
    else
    {
        printf("Letter not found in the String!\n");
    }
    //free the memory.
    free(str);
    return 0;
}
