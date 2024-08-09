#include <stdio.h>
#include <stdlib.h>
//function prototype.
int sum_Even_Add(int [],int ,int *,int *);
int main()
{
    //declare the variable.
    int n,i=0,Even=0,Add=0;
    //ask the user for array size.
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    //declare array memory dynamically.
    int *a = malloc(sizeof(int)*n);
    //read the array value.
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d ",i+1);
        scanf("%d",&a[i]);
    }
    //call the function.
    sum_Even_Add(a,n,&Even,&Add);
    //print the output.
    printf("Sum of even numbers: %d\n",Even);
    printf("Sum of add numbers: %d\n",Add);
    free(a);
    return 0;
}
//function definition. 
int sum_Even_Add(int a[],int n,int *Even,int *Add)
{
    //declare variable.
    int i=0;
    //run the loop and separete the value[Even value and Add value].
    for(i=0;i<n;i++)
    {
        //check the condition and separate the value. 
        if(a[i] % 2 == 0)
        {
            //Even value stored here.
            *Even += a[i];
        }
        else
        {
            //Add value stored here.
            *Add += a[i];
        }
    }
}

//End of program.
