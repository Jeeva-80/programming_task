#include <stdio.h>
#include <string.h>
int swap(char *str1,int count,int len)
{
    int i = 0,j = 0,k = 0,temp = 0;   //declare the variable.
    char arr[10];    //local string.
    while(count > 0)  //reversed the number and convert the character.
    {
        arr[i++] = (count % 10) + '0';
        count /= 10;
    }
    arr[i] = '\0';
    int len1 = strlen(arr);
    for(j = 0;j < len1/2;j++)  //again swap to normal position.
    {
        temp = arr[j];
        arr[j] = arr[len1 - 1 - j];
        arr[len1 - 1 - j] = temp;
    }
    for(i = 0;arr[i];i++)      //add the main string.
    {
        str1[len] = arr[i];
        len++;
    }
    return len;   //return index.
}
int main()
{
    char str[50];     //declare the string.
    char str1[50];
    int i = 0,j = 0,temp = 0,num = 0,count = 0;   //local variable.
    printf("Enter the string with numbers: ");    //read the string.
    scanf("%s",str);
    for(i = 0;str[i];i++)   //loop.
    {
         if(str[i] >= 32 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126)
        {
            str1[j] = str[i];   //special character are stored to string.
            j++;
        }
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            str1[j] = str[i];  //alphabet character.
            j++;
        }
        if(str[i] >= '0' && str[i] <= '9')  //numbers.
        {
            num = num * 10 + str[i] - '0';
            if(str[i + 1] >= 'a' && str[i + 1] <= 'z' || str[i + 1] >= 'A' && str[i + 1] <= 'Z' || str[i + 1] >= 32 && str[i + 1] <= 47 || str[i + 1] >= 58 && str[i + 1] <= 64 || str[i + 1] >= 91 && str[i + 1] <= 96 || str[i + 1] >= 123 && str[i + 1] <= 126)
            {
                int len = strlen(str1); //find the index of number next character or special character.  
                count = (num + 5);
                num = 0;
                int ret = swap(str1,count,len);  //function call.
                j = ret;  //retutrn index.
            }
        }
    }
    printf("Final string is: %s\n",str1);  //final output here.
    return 0;
} 

//End of program.