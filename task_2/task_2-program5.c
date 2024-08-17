#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i = 0,j = 0,count = 0,temp=0;
    //allocating memory size dynamically.
    char *str = malloc(30);
    char *str1 = malloc(30);
    //read the first string.
    printf("Enter the String 1: ");
    scanf("%s",str);
    //read the second string.
    printf("Enter the string 2: ");
    scanf(" %s",str1);
    int len = strlen(str1);
    //compare the both string for loop.
    for(i = 0;str[i];i++)
    {
        count=0;
        for(j = 0;str1[j];j++)
        {
            if(str[i+j] != str1[j])
            {
                break;
            }
            else
            {
                //sun-string matched means count will incremented.
                count++;
            }
        }
        if(len==count)
        {
            temp=1;
            break;
        }
    }
    //condition for sun-string length and count matched means printed the output here.
    if(temp)
    {
        printf("Substring \'%s\' is present inside the string \'%s\'.\n",str1,str);
    }
    else
    {
        printf("Substring \'%s\' is NOT present inside the string \'%s\'.\n",str1,str);
    }
    //free the memory.
    free(str);
    free(str1);
    return 0;
}


//End of program.