#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i = 0,Even = 0,Odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(i = 0;i < n; i++)
    {
        printf("Enter the number: %d ",i + 1);
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0)
        Even += arr[i];
        else
        Odd += arr[i];
    }
    printf("Sum of even numbers: %d\nSum of odd numbers: %d",Even,Odd);
    free(arr);
    return 0;
}