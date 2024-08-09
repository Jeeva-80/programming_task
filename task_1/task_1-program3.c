#include <stdio.h>
//function prototype.
int sum_of_arrays(int [],int [],int );
int main()
{
    //declare the variable.
    int n,i = 0,j = 0;
    //ask the user for array size.
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    //declare arrays.
    int arr[n];
    int arr_1[n];
    //read the first array value.
    for(i = 0;i < n; i++)
    {
        printf("Enter the number %d ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    //read the second array value.
    for(j = 0;j < n; j++)
    {
        printf("Enter the number %d ",j+1);
        scanf("%d",&arr_1[j]);
    }
    //call the function.
    sum_of_arrays(arr,arr_1,n);
    return 0;
}
//function definition. 
int sum_of_arrays(int arr[],int arr_1[],int n)
{
    //declare variable.
    int i=0,sum = 0;
    //run the loop and add the two arrays.
    printf("\n");
    printf("Sum of the two arrays are: \n");
    for(i=0;i<n;i++)
    {
        // each index values add and printed here.
        sum = arr[i] + arr_1[i];
        printf("%d\n",sum);
    }
}

//End of program.
