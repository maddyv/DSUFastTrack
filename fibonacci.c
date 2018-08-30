#include <stdio.h>
void input(int* ni) // Input function definition
{
    printf("Enter the number upto which the Fibonacci series is to be displayed: "); // Request input
    scanf("%d", ni);
}
void fbns(int no)
{
    int a=0; // Init first 3 numbers
    int b=1;
    int c=1;
    printf("%d %d ",a,b); // Print first three numbers
    while(b<=no)
    {
        printf("%d ",c); // Print sum
        c=a+b; // Sum previous two elements
        a=b; // Interchange variables
        b=c;
    }
}
int main() // Main function
{
    int n; // Init main n var
    input(&n); // Call input function
    fbns(n); // Call series function
    return 0; // Terminate program
}
