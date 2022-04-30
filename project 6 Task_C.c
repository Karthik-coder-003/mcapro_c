/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
// To find LCM of two numbers using recursion
#include <stdio.h>
#include <stdlib.h>
/* Let me explain certain mathematical concepts I have used for this problem
according to rule: product of two number = HCF.LCM
according to Euler's rule: if we have to find HCF of 45 and 30 let's say so we 
begin like this 45 = 30*1 + 15
               30 = 15*2 + 0 since remainder=0 so HCF 15
               we find HCF Then according to first rule find LCM
*/
int HCF(int i, int n) // Function declaration
{
    if(i>n)
    {
        if(i%n==0)
        {
            return n;
        }
        else if(i%n!=0)
        {
            return HCF(n,i%n); // recursive call
        }
    }
    else if(n>i)
    {
        if(n%i==0)
        {
            return i;
        }
        else if(n%i!=0)
        {
            return HCF(i,n%i); // recursive call
        }
    }
}
int main()
{
    int num1, num2, result, LCM;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    result = HCF(num1, num2); // function calling
    LCM = (num1*num2)/result;
    printf("The LCM of %d and %d is %d ",num1, num2, LCM);
    return 0;
}
