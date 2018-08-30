#include <stdio.h> // import I/O package
void input(int* ai); // Input function prototype
int reverse(int a); // Reverse function prototype
int check_palindrome(int b); // Palindrome Check/Output function prototype
int main() // Main function
{
    int n; // Init var
    input(&n); // call input function
    check_palindrome(n); // call function to process and print messages accordingly
    return 0; // Program terminates
}
void input(int* ai) // Input function definition
{
    printf("Enter the number: "); // Request for input
    scanf("%d", ai);
}
int reverse(int a) // Reverse function definition
{
    int d; // Init digit var
    int rev=0; // Init var to store reversed number
    while(a!=0)
    {
        d=a%10; // Digit extraction
        rev=rev*10+d; // Reverse updation
        a=a/10; // A divided to remove one place
    }
    return rev; // Return reversed number
}
int check_palindrome(int b) // Palindrome function definition
{
    if(b==reverse(b)) // If number is equal to reverse of itself
    {
        printf("The number is a palindrome number. ");
    }
    else
    {
        printf("The number is not a palindrome number. ");
    }
}
