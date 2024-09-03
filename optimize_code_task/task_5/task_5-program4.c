#include <stdio.h>
int main()
{
	unsigned long int num; //variable.
	int F_num=0,S_num=0,set = 0,sum = 0;
	printf("Enter the number: ");//read the num.
	scanf("%ld",&num);
	F_num = num & ((1 << 8)-1); //calculation.
	S_num = (num & ((1 << 16)-1)) >> 8;
	if((num & (1 << 25)) >> 25) //check the 25th bit is set or not.
		sum = F_num - S_num;
	else
		sum = S_num - F_num;
	printf("The Output number is %d %d %d\n",F_num,S_num,sum); //output.
	return 0;
}

//End of program.