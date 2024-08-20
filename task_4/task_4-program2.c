#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];      //declare the string Size.
	int arr[30];
	char ch;           //declare the variable.
	int i = 0,j = 0,flag = 0,count = 1,F_num = 0,S_num = 0,sum = 0;
	printf("Enter the Operation String: ");   //read the string.
	scanf("%[^\n]",str);
	for(i = 0; str[i]; i++)    //loop.
	{
		if(str[i] == ' ')   //space.
		{
			i++;
		}
		if(str[i] >= '0' && str[i] <= '9')   //Find the number.
		{
			S_num = S_num * 10 + str[i] - '0';  //strore the int variable.
			if(count < 2)
			{
				if(str[i+1]  == ' ' || str[i + 1] >= 'a' && str[i + 1] <= 'z') //replaced condition.
				{
					count++;
					F_num = S_num;
					S_num = 0;
				}
			}
		}
		if(str[i] == '+' || str[i] == '-' || str[i] == '*')   //Find the operator.
		{
			flag = 1;   //flag updated.
			ch = str[i];
		}
	}
	if(flag)
	{
		switch(ch)   //switch case.
		{
		case '+':
			sum = F_num + S_num;
			break;
		case '-':
			sum = F_num - S_num;
			break;
		case '*':
			sum = F_num * S_num;
			break;
		}
		printf("The Result is %d\n",sum);  //printed output here.
	}
	else
	{
		printf("Operation cannot be done!!\n");   //Error message.
	}
}

//End of program.