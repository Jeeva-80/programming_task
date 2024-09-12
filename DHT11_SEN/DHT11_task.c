#include <stdio.h>
#include <stdint.h>

int main()
{
    /*total encoding bits */
	uint64_t sender = 0b0000000000000000000000000000000000111010000101100000111001011110;
	int8_t sender_checksum = 0,receiver_checksum = 0;
	int8_t receiver_complement = 0,sender_complement = 0;
	printf("Whole bit value %ld\n",sender);
	printf("after Extracting the value: \n");


	/* Humidity logic part */
	uint8_t RH_decimal = 0,RH_fract = 0,RH_d = 0,RH_f = 0;
	RH_d = (sender >> 32);
	RH_decimal = (RH_d & ((1 << 8)-1));
	RH_f = sender >> 24;
	RH_fract = (RH_f & ((1 << 8)-1));
	printf("RH_decimal = %d\nRH_fract = %d\n",RH_decimal,RH_fract);

 	/* Temparature logic part */
	uint8_t temp_decimal = 0,temp_fract = 0,temp_d = 0,temp_f = 0;
	temp_d = (sender >> 16);
	temp_decimal = (temp_d & ((1 << 8)-1));
	temp_f = sender >> 8;
	temp_fract = (temp_f & ((1 << 8)-1));
	printf("temp_decimal = %d\ntemp_fract = %d\n",temp_decimal,temp_fract);
	
	/* sending chcking value */
	sender_checksum = (sender & ((1 << 8)-1));
	printf("sender_checksum = %d\n",sender_checksum);
	
	/* sender once complement logic */
	sender_complement = ~sender_checksum;
	printf("sender_complement = %d\n",sender_complement);
	
 	/* sender_checksum calculation logic */
 	receiver_checksum = (sender_complement + (RH_decimal + RH_fract + temp_decimal + temp_fract));
 	receiver_complement = ~receiver_checksum;
	if(receiver_complement == 0)
		printf("no data loss, data transfer Successfully\n");
	else
		printf("data loss, data transfer NOt Done!\n");
}