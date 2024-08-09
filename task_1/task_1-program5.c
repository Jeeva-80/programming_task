#include <stdio.h>
#include <stdlib.h>
int main()
{
    //declare the variable.
    int n,i = 0,j = 0,temp = 0;
    //ask the user for array size.
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    //declare arrays.
    int *arr = malloc(sizeof(int)*n);
    int *arr_1 = malloc(sizeof(int)*n);
    //read the array value.
    for(i = 0;i < n; i++)
    {
        printf("Enter the number %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n ; i++)
    {
        //the array value stored reversed here to another array.
        arr_1[j++] = arr[n-i-1];
    }
    printf("\n");
    //print the output here.
    printf("The Inverted array elements are: \n");
    for(i = 0; i < j; i++)
    {
        printf("%d\n", arr_1[i]);
    }
    free(arr);
    free(arr_1);
    return 0;
}

//End of program.
