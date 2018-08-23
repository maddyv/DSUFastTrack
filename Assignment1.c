#include <stdio.h> // Importing Standard IO Package
#include <math.h> // Importing Math package for the square root function
void read(int* ai, int* bi, int* ci); // Input function prototype
double compute(int* a1, int* b1, int* c1); // Compute function prototype
/*
* main function receives no parameters:
* Input parameters : none
* Output parameters Prints: Roots of the Quadratic Equation
* Return parameter : return 0 (for program termination)
*/
int main() // Main function
{
	int a, b, c; // Declaring variables to store co-efficients
	read(&a,&b,&c); // Passing addresses of variables to read function
	double rt=0.0; // Declaring root var
	double temp=0.0; // Declaring temp var to store complex part of root
	double dcr1=compute(&a,&b,&c); // Passing addresses of vars to compute function to obtain the discriminant value
	if(dcr1==0.0) // If one root/two equal roots are present
	{
		rt=(double)-(b/(2.0*a)); // Standard Formula
		printf("There is one root and it is %.2lf\n",rt);
	}
	else if(dcr1>0.0) // If two real unequal roots are present
	{
		rt=(double) (-b+sqrt((double)dcr1))/(2.0*a); // Standard Formula
		printf("There are two real roots i.e. %.2lf and ",rt);
		rt=(double) (-b-sqrt((double)dcr1))/(2.0*a); // Standard Formula
		printf("%.2lf\n",rt);
	}
	else if(dcr1<0.0) // If two complex unequal roots are present
    {
        rt=(double)-(b/(2.0*a)); // Standard Formula (real part)
        temp=(double) (sqrt(-dcr1))/(2*a); // Standard Formula (complex part)
        printf("There are two complex roots i.e. %.2f + %.2fi and %.2f - %.2fi",rt,temp,rt,temp);
    }
	return 0; // Program terminates
}
/*
* read function receives three parameters:
* Input parameters int*: ai, bi, ci
* Output parameters : none
* Return parameter : none
*/
void read(int* ai, int* bi, int* ci) // Accepts pointers to the main variables
{
	printf("Enter co-efficient \'a\' \n"); // Requests input of a
	scanf("%d",ai);
	printf("Enter co-efficient \'b\' \n"); // Requests input of b
	scanf("%d",bi);
	printf("Enter co-efficient \'c\' \n"); // Requests input of c
	scanf("%d",ci);
}
/*
* compute function receives three parameters:
* Input parameters int*: a1, b1, c1
* Output parameters : none
* Return parameter : The value of the discriminant
*/
double compute(int* a1, int* b1, int* c1) // Accepts pointers to the main variables
{
	double dcr=(double) ((*b1)*(*b1))-(4.0*(*a1)*(*c1)); // Calculates discriminant
	return dcr; // Returns discriminant
}

