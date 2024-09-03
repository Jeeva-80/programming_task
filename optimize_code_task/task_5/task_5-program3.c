#include <stdio.h>
int main()
{
	unsigned long int result = 0,num;  //declare variable.
	int rep,i = 0,grap = 0,n = 0,temp,count = 0;
	printf("Enter the Number: "); //read the main number.
	scanf("%ld",&num);
	printf("Enter the replace number: ");
	scanf("%d",&rep); //replaced number. 
	temp = rep;  //update.
	for(i = temp; i > 0; i /= 2)
		count++; //count(replaced) bit lesser then main bit count. 
	if(count  < 14)
	{
		grap = ((num & ((1 << 8)-1)) | (rep << 8));
		n = num & (~((1 << 17)-1));
 		result = ((unsigned)grap | n);         //output.
		printf("The Final Number is %ld\n",result);
	}
	else
		printf("Invalid number: %d, More than 14 bits!\n",rep);  //Error output.
} //End of program.