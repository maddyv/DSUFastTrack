#include <stdio.h> // Include Standard I/O Library
#include <math.h> // Include Math Library for ease of calling the power function
void input(int* ai); // Input function prototype
int check_armstrong(int num); // Condition function prototype
int main() // Main function
{
    int a; // Init main var
    input(&a); // Pass address of main var to input
    int chk=check_armstrong(a); // Create chk for use as a pseudo-boolean variable
    if(chk==1) // If condition is true
    {
        printf("The number is an Armstrong number. \n");
    }
    else // If condition is false
    {
        printf("The number is not an Armstrong number. \n");
    }
    return 0; // Terminate program
}
void input(int* ai) // Input function definition
{
    printf("Enter the integer: \n"); // Request for input
    scanf("%d", ai);
}
int check_armstrong(int num) // Condition function definition
{
    int ncl=num; // Create clone of num
    int sum=0; // Var for sum of the digits
    int cn=0; // Var to temporarily store digits
    while(num>0) // Terminates when moved from one's place
    {
        cn=num%10; // Extract digit
        sum=sum+ pow(cn,3); // Cube the digit and add
        num=num/10; // Move to next place
    }
    if(sum==ncl) // If the sum of the cubes of the digits is equal to the number
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
