#include <stdio.h> // import I/O Package
void input(int* ai, int* bi) // Input function
{
    printf("Enter the numbers: \n"); // Request for input
    scanf("%d",ai);
    scanf("%d",bi);
}
void swap(int* a1, int* b1) // Swapping function
{
    int temp=*a1; // Creating temp variable to store number 1
    *a1=*b1; // Interchanging variables
    *b1=temp;
    printf("Number 1: %d \nNumber 2: %d",*a1,*b1); // Prints new interchanged numbers
}
int main() // Main function
{
    int a,b; // Init main var
    input(&a,&b); // Pass addresses to input function
    swap(&a,&b); // Pass addresses to swap function
    return 0; // Terminates program
}
