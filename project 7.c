/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
/* A program to initialize a 3.3 array, insert elements into the array, read and
print an array of elements using only pointers. Also find and print the sum of 
all diagonal elements */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[3][3]; // declaring an array
    int i,j;
    int sum;
    int *ptr = &arr[0][0]; // creating a pointer variable
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the elements: [%d][%d] ",i,j); // printing elements of array
            scanf("%d",&arr[i][j]); 
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",*(ptr+i*3+j)); // displaying elements in matrix form
        }
        printf("\n");
    }
    sum = arr[0][0] + arr[1][1]+ arr[2][2]; // finding sum of diagonal elements
    printf("The sum of diagonal elements is: %d",sum); // printing diagonal elements

    return 0;
}
