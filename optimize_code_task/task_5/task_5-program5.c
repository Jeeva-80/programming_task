#include <stdio.h>
int main()
{
	char str[50];      //declare the string size.
	int i = 0,num = 0,count = 0,flag = 0,En_bit = 0,En_co = 0,arr[32] = {0},j = 0,base = 1;
	int date = 0,month = 0,year = 0,co = 0,num_co = 0,En_dec = 0,En_arr[32] = {0},k=0,m=0;  //declare the variable.
	printf("Enter the Date: ");    //read the string.
	scanf("%[^\n]",str);
	for(i=0; str[i]; i++) //loop.
	{
		if(str[i] >= '0' && str[i] <= '9')   //found the numbers.
		{
			num = num * 10 + str[i] - '0';
			En_bit = En_bit * 10 + str[i] - '0';
			En_arr[j++] = 0 * 10 + str[i] - '0';
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
			flag = 1; //Error flag.
	}
	if(month == 2)     //once the month is february, so the date should be blow 28 only.
	{
		if(date >= 29 && date <= 31)
			flag = 1; //Error flag.
	}
	if(num_co >= 8 && flag != 1 && (month >= 1 && month <= 12) && (date >= 1 && date <= 31))
	{
		switch(month)              //print the output here.
		{
		case 1:
			printf("Valid Date: %d January %d",date,year);
			break;
		case 2:
			printf("Valid Date: %d February %d",date,year);
			break;
		case 3:
			printf("Valid Date: %d March %d",date,year);
			break;
		case 4:
			printf("Valid Date: %d April %d",date,year);
			break;
		case 5:
			printf("Valid Date: %d May %d",date,year);
			break;
		case 6:
			printf("Valid Date: %d June %d",date,year);
			break;
		case 7:
			printf("Valid Date: %d July %d",date,year);
			break;
		case 8:
			printf("Valid Date: %d Augest %d",date,year);
			break;
		case 9:
			printf("Valid Date: %d September %d",date,year);
			break;
		case 10:
			printf("Valid Date: %d october %d",date,year);
			break;
		case 11:
			printf("Valid Date: %d November %d",date,year);
			break;
		case 12:
			printf("Valid Date: %d December %d",date,year);
			break;
		}
		printf("\n");
		printf("Binary bits are: \n");
		for(i = 31; i>= 0; i--)
		{
			if(En_bit & (1 << i))    //hole number binary bits.
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
		int size = j;
		printf("The Encoding bits are: \n");
		for(i=0; i<size; i++)
		{
			if(En_arr[i] == 1)    //encoding bits.
				k = 1;
			else if(En_arr[i] >= 2 && En_arr[i] <= 3)
				k = 2;
			else if(En_arr[i] >= 4 && En_arr[i] <= 7)
				k = 3;
			else if(En_arr[i] >= 8 && En_arr[i] <= 12)
				k = 4;
			else
				k = 1;
			for(j=k-1; j >= 0; j--)
			{
				if(En_arr[i] & (1 << j))
				{
					printf("1 ");
					En_co++;
					arr[m++] = 1;
				}
				else
				{
					printf("0 ");
					En_co++;
					arr[m++] = 0;
				}
			}
		}
		printf("\n");
		for(j = En_co - 1; j >= 0; j--) //decimal convertions.
		{
			if(arr[j] & 1)
				En_dec = En_dec + base;
			base = base * 2;
		}
		printf("Encoded bits Counts are %d\n",En_co);   //print the output here.
		printf("equivalent decimal number %d",En_dec);
	}
	else
		printf("Invalid Date!!\n");  //Error messgae.
	return 0;
}
//End of program.