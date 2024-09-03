#include <stdio.h>
#include <string.h>
int main()
{
    //declare the variable.
    int i = 0,j = 0,count = 0,F_ind = 0,ind = 0,L_ind = 0;
    char str[50];
    char str1[20];
    char str2[50];
    printf("Enter the main string: "); //main string.
    scanf("%s",str);
    printf("Enter the sub-string: "); //sub-string.
    scanf(" %s",str1);
    printf("Enter the replaced string: "); //replaced string.
    scanf(" %s",str2);
    int M_len = strlen(str); //length calculations.
    int len = strlen(str1);
    int len1 = strlen(str2);
    for(i = 0; str[i]; i++)
    {
        count = 0;
        for(j = 0; str1[j]; j++)
        {
            if(str[i + j] != str1[j])
            break;
            else       //total count.
            {
                count++;
                F_ind = i;  //first index.
            }
        }
        if(len == count)
        {
            break;
        }
    }
     int ret = len1 - len;
    if(count == 0) //Error message.
    {
        printf("The substring is NOT found in main string!\n");
        return 0;
    }
    for(i = F_ind; str[i]; i++) 
    {
        if(str[i] == str[count])
        {
            ind = i; //last index.
            break;
        }
    }
    L_ind = F_ind + ind;
    j = 0;
    if(len == len1) //sub and replaced string are equal. 
    {
        for(i=F_ind;i<L_ind;i++)
            str[i] = str2[j++];
    }
    else if(len > len1) //sub-string greater.
    {
         for (i = F_ind;i<L_ind;i++) //find the char and make its zero.
	        str[i] = '0';
	    i=F_ind,j=0;
		while(str2[j])               //add the sub-string. 
			str[i++] = str2[j++];
			int cnt  =strlen(str);
			for(i = 0; i < cnt ; i++)     //remove the zero.
			{
				if(str[i] == '0')
				{
					for(j = i; j < cnt; j++)
						str[j] = str[j+1];
					cnt--;
					i--;
				}
			}
    }
    else if(len < len1)  //sub-string lesser.
    {
        for (i = M_len; i >= F_ind + 1; i--)  //create the space.
			str[i + ret - 1] = str[i - 1];
		i=F_ind,j=0;
		while(str2[j])              //add the sub-string.
			str[i++] = str2[j++];
    }
    printf("The Final string: \"%s\" \n",str); //printed output here.
    return 0;
}


// End of program.