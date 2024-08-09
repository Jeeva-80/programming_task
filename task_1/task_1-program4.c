#include <stdio.h>
 
int main()
{
    //declare variable.
    int n,i = 0,key = 0,flag = 0,temp = 0;
    //ask the user for array size.
    printf("Enter the number of elements of arrays: ");
    scanf("%d",&n);
    //declare the array.
    int arr[n];
    //read the array index value from the user.
    for(i = 0;i < n; i++)
    {
        printf("Enter the number %d ",i+1);
        scanf("%d",&arr[i]);
    }
    //Enter the array value that you can find.
    printf("Enter the number to be found: ");
    scanf("%d",&key);
    //run the loop and find the index.
    for(i = 0;i < n; i++)
    {
        //compare the value.
        if(arr[i] == key)
        {
            //updated the flag value once the condition is true.
            flag = 1;
            temp = i; //stored the index to variables. 
        }
    }
    //print the output here.
    if(flag == 1)
    {
        printf("Number was found at index %d",temp);
    }
    else
    {
        printf("Number was NOT found\n");
    }
}

//End of program.
