/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
// To check whether a program is prime or not
#include <stdio.h>
#include <stdlib.h>
int prime(int n, int i )// Declaring function
{
    if(i==1)
    {
        return 1;
    }
    else if(i==0)
    {
        return 0;
    }
    else if(n%i==0)
    {
        return 0;
    }
    else if(n%i!=0)
    {
        return prime(n,i-1); //using recursion i.e. recursive calling
    }
}
int main()
{
    int number, result;
    
    printf("Enter the number: ");
    scanf("%d",&number);
    result = prime(number, number/2); // function calling
    if(result==1)
    {
        printf("The number is prime \n");
    }
    else
    {
        printf("The number is not prime");
    }
   
    return 0;
}
