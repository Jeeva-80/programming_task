#include <stdio.h>
int main()
{
	unsigned long long int num,replace; //variables.
	int result=0;
	int n=0,n1=0,n2=0,n3=0,ret=0,ret1=0,count = 0,temp = 0;
	printf("Enter the Number: "); //read the main number.
	scanf("%lld",&num);
	printf("Enter the replace number: "); //replaced number.
	scanf("%lld",&replace);
	temp = replace;
	while(temp != 0)
	{
		count++; //replace bit count.
		temp /= 2;
	}
	if(count < 14)
	{
		n = num & ~((1 << 17)-1); //replaced logic.
		n1 = n | replace;
		n1 = n1 << 8;
		n2 = n1 & ((1 << 17)-1);
		n3 = num & ~((1 << 17)-1);
		ret = n2 | n3;
		ret1 = num & ((1 << 7)-1);
		result = ret | ret1;
		printf("The Final Number is %lld\n",result); //output.
		return 0;
	}
	else
	{
		printf("Invalid number: %d, More than 14 bits!",replace); //Error output.
	}
}