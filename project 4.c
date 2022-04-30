/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
//  
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice; // creating a variable choice
    printf("for number-1: you get pizza \n");
    printf("for number-2 you get burger \n");
    printf("for number-3 you get pasta \n ");
    printf("for number 4 you get french fries \n ");
    printf("for number 5 you get sandwich \n");
    printf("please select a random number: ");
    scanf("%d",&choice); // taking input
    switch(choice) // using switch case
    {
        case 1: 
        printf(" food item - pizza \n price : 239 rs \n");
        break;
        case 2: 
        printf(" food item- burger \n price: 129 rs \n");
        break;
        case 3: 
        printf(" food item- Pasta \n price: 179 rs \n ");
        break;
        case 4: 
        printf(" food item- French fries \n price: 99 rs \n");
        break;
        case 5: 
        printf("food item- Sandwich \n price: 149 rs \n");
        break;
        default:
        printf("PLease enter a correct value");
    }
return 0;
}
