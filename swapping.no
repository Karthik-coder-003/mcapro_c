/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
// Writting a program to perform the swapping of two numbers without using a temporary variable
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2; // Creating two variables
    
    printf("Enter the first number please: \n"); // Taking input of first number
    scanf("%d", &num1);
    printf("Enter the second number please : \n ");// Taking input of second number
    scanf("%d", &num2);
    num1 = num1 + num2 ; // changing value of num1
    num2 = num1 - num2 ; // changing value of num2
    num1 = num1 - num2 ; // changing value of num1
    printf("The first number after swapping is: %d \n", num1); // printing the swapped number
    printf("The second number after swapping is : %d \n", num2); // printing the swapped number

    return 0;
}
