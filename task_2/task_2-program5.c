#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    //allocating memory size dynamically.
    char *str = malloc(30);
    char *str1 = malloc(30);
    //read the first string.
    printf("Enter the String 1: ");
    scanf("%s",str);
    //clear the input buffer.
    getchar();
    //read the second string.
    printf("Enter the string 2: ");
    scanf("%s",str1);
    //compare the string for condition.
    if(strstr(str,str1))
    {
        //condition true printed here.
        printf("Substring \"%s\" is present inside the string \"%s\".\n",str1,str);
    }
    else
    {
        //false condition printed here.
        printf("Substring \"%s\" is NOT present inside the string \"%s\".\n",str1,str);
    }
    free(str);
    free(str1);
    return 0;
}
