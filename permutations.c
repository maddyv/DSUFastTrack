#include <stdio.h>
int fact(int no); // factorial function prototype
void input(int* ni, int* ri); // input function prototype
void output(); // output function prototype
int main() // main function
{
    int n, r; // Init main vars
    input(&n,&r); // Pass addresses to input
    output(n,r); // Display nPr and nCr
    return 0; // terminate program
}
int fact(int no)
{
    int fs=1; // Init cumulative multiplication var to 1s
    for(int i=1;i<=no;++i) // Loop goes on till number
    {
        fs=fs*i; // Finding factorial
    }
    return fs;
}
void input(int* ni, int* ri)
{
    printf("Enter 'n': \n"); // Request for input
    scanf("%d",ni);
    printf("Enter 'r': \n"); // Request for input
    scanf("%d",ri);
}
void output(int no, int ro)
{
    float pr=(float) (fact(no))/(fact(no-ro)); // Typecasting to float for nPr
    float cr=(float) pr/(fact(ro)); // Typecasting to float for nCr
    printf("nPr = %.2f \n",pr);
    printf("nCr = %.2f \n",cr);
}
