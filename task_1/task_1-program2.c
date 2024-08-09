#include <stdio.h>
#include <stdlib.h>
//function prototype.
int Add_val(int [],int ,int);
int main()
{
    //declare the variable.
    int n,i = 0,add_value = 15;
    //ask the user for array size.
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    //declare array memory dynamically.
    int *a = malloc(sizeof(int)*n);
    //read the array value.
    for(i = 0;i < n; i++)
    {
        printf("Enter the number %d ",i+1);
        scanf("%d",&a[i]);
    }
    //call the function.
    Add_val(a,n,add_value);
    //print the output.
    printf("Sum of the two arrays are: \n");
    for(i = 0;i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    free(a);
    return 0;
}
//function definition. 
int Add_val(int a[],int n,int add_value)
{
    //declare variable.
    int i=0;
    //run the loop and add the values.
    for(i=0;i<n;i++)
    {
        //Each and Every index the value(15) added here.
        a[i] = a[i] + add_value;
    }
}

//End of program.
