#include <stdio.h>
void input(int* a1,int* b1, int* c1); // Input function prototype
int greatest_number (int a2, int b2, int c2); // Greatest number function prototype
int main() // main function
{
    int a,b,c; // Init number vars
    input(&a,&b,&c); // Passing addresses of vars to input function
    printf("The greatest number is %d \n",greatest_number(a,b,c)); // Printing greatest number
    return 0; // Terminates program
}
void input(int* a1,int* b1, int* c1) // Input function definition
{
    printf("Enter the three numbers: \n"); // Request for input
    scanf("%d",a1);
    scanf("%d",b1);
    scanf("%d",c1);
}
int greatest_number (int a2, int b2, int c2) // Greatest number function definition
{
    if(a2>b2) // Checks if a is greater than b
    {
        if(a2>c2) // if a is greater than b, then this clause decides the greatest numbers
        {
            return a2;
        }
        else
        {
            return c2;
        }
    }
    else
    {
        if(b2>c2) // if b is greater than c, then this clause decides the greatest numbers
        {
            return b2;
        }
        else
        {
            return c2;
        }
    }
}
