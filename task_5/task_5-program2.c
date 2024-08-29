 #include <stdio.h>

int main()
{
    unsigned long int num; //variables.
    int i = 0,arr[32] = {0},j = 15,ret = 0,sum = 0,base = 1;
    printf("Enter the decimal number: ");
    scanf("%d",&num); //read the num.
    for(i=0;i<32;i++)  //loop.
    {
        if(num & (1 << i))
        {
            if(i >= 15 && i <= 23) //adding one.
            {
                arr[j++] = 1;
            }
        }
        else
        {
            if(i >= 15 && i <= 23)
            {
                arr[j++] = 0; //adding zero.
            }
        }
    }
    for(j = 15;j<=23;j++)
    {
        if(arr[j] & 1)
        {
            sum += base; //binary equalant decimal number.
        }
        base *= 2;
    }
    printf("The extracted number is %d\n",sum); //output.
    return 0;
}
//End of program.