#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];      //declare the string size.
	int i = 0,num = 0,count = 0,flag = 0;
	int date = 0,month = 0,year = 0,co = 0,num_co = 0;  //declare the variable.
	char *str1[100] = {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGEST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
	printf("Enter the Date: ");    //read the string.
	scanf("%[^\n]",str);
	while(str[i])   //loop.
	{
		if(str[i] >= '0' && str[i] <= '9')   //found the numbers.
		{
			num = num * 10 + str[i] - '0';
			count++;
			num_co++;
			if(str[i + 1] == '-' || str[i + 1] == '/' || str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == ' ' || count == 2 || count == 4)
			{
				++co;
				if(co == 1)  //date stored here.
					date = num;
				if(co == 2)  //month stored here.
					month = num;
				if(co == 3)  //year stored here.
					year = num;
				num = 0; //num upadted to zero.
			}
		}
		else if(str[i] >= 33 && str[i] <= 44 || str[i] >= 58 && str[i] <= 64)
		{
			flag = 1;
		}
		i++;
	}
	if(month == 2)     //once the month is february, so the date should be blow 28 only.
	{
		if(date >= 29 && date <= 31)
		{
			flag = 1;
		}
	}
	if(num_co >= 8 && flag != 1 && (month >= 1 && month <= 12) && (date >= 1 && date <= 31))
	{
		for(i=1; str[i]; i++)
			if(month == i)
				printf("Valid Date: %d %s %d\n",date,str1[i],year);
	}
	else
		printf("Invalid Date!!\n");  //Error messgae.
	return 0;
}


//End of program.