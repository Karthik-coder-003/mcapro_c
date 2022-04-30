/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
/* Write a C program that defines a structure employee containing the details 
such as empno, empname, department name and salary. The structure has to store 
20 employees in an organization. Use the appropriate method to define the above 
details and define a function that will display the contents
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct employee // a structure is created
{
    char name[100];
    int age;
    int phone_no;
    int salary;
};
void display() // A function is created to display data of 20 employees
{
    int i;
    struct employee p[20];
    printf("name\tage\tphone number\tsalary\n");
    for(i=0;i<20;i++)
    {
        scanf("%s\t%d\t%d\t%d",p[i].name,&p[i].age,&p[i].phone_no,&p[i].salary);
    }
}
int main()
{
    display(); // function calling
    return 0;
}
