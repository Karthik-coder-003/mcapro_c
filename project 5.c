/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j; // defining variables
    for(i=1;i<7;i++) // using loop variable to manage lines
    {
        for(j=1;j<=i;j++) // using the loop to ensure 01 is printed accordingly
        {
            printf("01");
        }
        printf("\n"); // managing new line
    }
    

    return 0;
}
