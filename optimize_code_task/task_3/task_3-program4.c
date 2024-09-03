#include <stdio.h>
int main() 
{
    //declare the string.
    char str[50];
    char str1[30];
    char str2[50];
    //declare the variable.
    char ch;
    int i = 0,j = 0,k = 0, m = 0,count = 0,flag = 0;
    //read the main string.
    printf("Enter the String: ");
    scanf("%s",str);
    //read the sub-string. 
    printf("Enter the substring: ");
    scanf(" %s",str1);
    //read the replaced character. 
    printf("Enter the character to be added: ");
    scanf(" %c", &ch);
    //loop.
    while (str[i]) 
    {
        count = 1;
        flag = i;
        j = 0;
        while (str1[j])
        {
            if (str[flag] != str1[j])
            {
                count = 0;
                break;
            }
            flag++;
            j++;
        }
        if (count && str1[j] == '\0') 
        {
            str2[k++] = ch;
            for (m = 0; str1[m] != '\0'; m++) 
            {
                str2[k++] = str1[m];
            }
            str2[k++] = ch;
            i += j;
        } 
        else 
        {
            //remaining character string stored here.
            str2[k++] = str[i++];
        }
    }
    //output printed here.
    str2[k] = '\0';
    printf("The Final string is \"%s\"\n", str2);
    return 0;
}