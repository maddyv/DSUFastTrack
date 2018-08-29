#include <stdio.h>
void input(int* ni); // input function prototype
void output(int num); // output function prototype
int primechk(int no); // Pseudo-boolean prime function prototype
int main() // Main function
{
    int n; // Init main 'N' var
    input(&n); // Pass address to input
    output(n); // Pass variable to output
    return 0; // Terminate program
}
void input(int* ni) // input function definition
{
    printf("Enter the 'N' number: "); // Request for input
    scanf("%d",ni);
}
int primechk(int no) // Prime function definition
{
    int ctr=0; // Init counter var
    for(int j=1;j<=no;++j) // For loop that goes through all numbers from 1 to the number itself
    {
        if(no%j==0) // Checks if remainder is zero i.e. is divisible
        {
            ctr++; // Increments counter
        }
    }
    if(ctr==2) // Prime number has two factors
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void output(int num) // Output function definition
{
    for(int i=1;i<=num;++i) // For loop from every number to the number itself
    {
        if(primechk(i)==1) // Checks if numbers within the range 0 to 'N' are prime
        {
            printf("%d ",i); // Prints if prime
        }
    }
}
