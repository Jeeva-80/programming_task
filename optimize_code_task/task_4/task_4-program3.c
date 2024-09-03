#include <stdio.h>
int main()
{
	char str[100];     //declare the size.
	int arr[30];
	printf("Enter the Data String: ");   //read the string.
	scanf("%[^\n]",str);
	int i = 0,j = 0,num = 0,sum = 0;  //declare the variable.
	for(i = 0; str[i]; i++)    //loop.
	{
		if(str[i] == ' ')    //space.
			i++;
		if(str[i] >= '0' && str[i] <= '9')  //found the number and add the other variable.
			num = num * 10 + (str[i] - '0');
		if(str[i+1] == ',' || str[i+1] == '\0')  //once comma is founded replace to other variable.
		{
			arr[j++] = num;
			num = 0;
		}
	}
	printf("The Filtered data is ");
	for(i = 0; i < j; i++)
		printf("%d, ",arr[i]);  //printed the value.
	for(i = 0; i < j; i++)
		sum += arr[i];       //printed the output.
	printf("\nThe sum of Data is %d",sum);
	return 0;
}

//End of program.