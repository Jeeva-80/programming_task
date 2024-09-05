#include <stdio.h>
int main()
{
	unsigned long int num;
	int ret=0,ret1=0;
	printf("Enter the Number: ");
	scanf("%ld",&num);
	ret = (unsigned)num >> 15;
	ret1 = ret & ((1 << 9)-1);
	printf("The extracted number is %d\n",ret1);
}