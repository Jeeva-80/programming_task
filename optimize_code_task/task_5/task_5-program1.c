#include <stdio.h>
int main()
{
	int num,i = 0,temp = 0,count = 0; //variable.
	printf("Enter the decimal number: "); //read the decimal number.
	scanf("%d",&num);
	temp = num; //update.
	while(num != 0) //count.
	{
		count++;
		num /= 2;
	}
	printf("Binary Equivalent of num is %d\n",temp);
	for(i = count - 1; i >= 0; i--) //loop.
	{
		if(temp & (1 << i)) //print binary with bitwise operation.
			printf("1 ");
		else
			printf("0 ");
	}
}

//End of program.