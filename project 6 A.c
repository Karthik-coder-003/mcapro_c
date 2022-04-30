/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
// A program to find the sum of digits of a number
#include <stdio.h>
#include <stdlib.h>
int sum(int n) // declaring function
{
    if (n==0)
    {
        return 0;
    }
    else if( n>0 && n<10)
    {
        return n;
    }
    else
    {
        return n%10 + sum(n/10); // using recursion i.e. giving recursive calls
    }
}
int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d",&num);
    result = sum(num); // function calling 
    printf("The sum of digits of %d is %d",num,result);
    return 0;
}
