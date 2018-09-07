#include <stdio.h> // Include Standard I/O Library
#include <math.h> // Include Math Library to call the power function
void input(int* ai); // Input function prototype
void check_armstrong(int num); // Condition function prototype
int main() // Main function
{
    int a; // Init main var
    input(&a); // Pass address of main var to input
    check_armstrong(a); // Call function to process and print a message accordingly
    return 0; // Terminate program
}
void input(int* ai) // Input function definition
{
    printf("Enter the integer: \n"); // Request for input
    scanf("%d", ai);
}
void check_armstrong(int num) // Condition function definition
{
	int dc=0; // Init digit counter var
    int ncl=num; // Create clone of num
	while(num>0)
	{
		dc++; // Counts digits
		num=num/10; 
	}
	num=ncl; // Give num the original value
    int sum=0; // Var for sum of the digits
    int cn=0; // Var to temporarily store digits
    while(num>0) // Terminates when moved from one's place
    {
        cn=num%10; // Extract digit
        sum=sum+ pow(cn,dc); // Raise the digit to the appropriate power and add
        num=num/10; // Move to next place
    }	
    if(sum==ncl) // If the sum of the cubes of the digits is equal to the number
    {
        printf("The number is an Armstrong number. \n");
    }
    else
    {
        printf("The number is not an Armstrong number. \n");
    }

}
