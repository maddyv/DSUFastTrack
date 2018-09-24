#include <stdio.h> // Importing Standard IO Package
#include <math.h> // Importing Math package for the square root function
struct complex
{
	double real;
	double img;
};
void read(double* ai, double* bi, double* ci); // Input function prototype
void compute(double a1, double b1, double c1,double* rt1, double* rt2, struct complex *i1, double* dcr); // Compute function prototype
void output(double rto1, double rto2, struct complex io1, double dcro1); // Output function prototype
/*
* main function receives no parameters:
* Input parameters : none
* Output parameters Prints: Roots of the Quadratic Equation
* Return parameter : return 0 (for program termination)
*/
int main() // Main function
{
	double a, b, c; // Declaring variables to store co-efficients
	read(&a,&b,&c); // Passing addresses of variables to read function
	double rf1,rf2,dcrm; // Init root vars
	struct complex if1;
	compute(a,b,c,&rf1,&rf2,&if1,&dcrm);
    output(rf1,rf2,if1,dcrm); // Passing addresses of vars to output function
	return 0; // Program terminates
}
/*
* read function receives three parameters:
* Input parameters double*: ai, bi, ci
* Output parameters : none
* Return parameter : none
*/
void read(double* ai, double* bi, double* ci) // Accepts pointers to the main variables
{
	printf("Enter co-efficient \'a\' \n"); // Requests input of a
	scanf("%lf",ai);
	printf("Enter co-efficient \'b\' \n"); // Requests input of b
	scanf("%lf",bi);
	printf("Enter co-efficient \'c\' \n"); // Requests input of c
	scanf("%lf",ci);
}
/*
* compute function receives three parameters:
* Input parameters double*: a1, b1, c1
* Output parameters : none
* Return parameter : The value of the discriminant
*/
void compute(double a1, double b1, double c1,double* rt1, double* rt2, struct complex *i1, double* dcr) // Accepts pointers to the main variables
{
	*dcr=((b1)*(b1))-(4.0*(a1)*(c1)); // Calculates discriminant
    if(*dcr==0.0) // If one root/two equal roots are present
    {
        *rt1=-((b1)/(2.0*(a1))); // Standard Formula
        *rt2=0;
    }
    else if(*dcr>0.0) // If two real unequal roots are present
    {
        *rt1=(-b1+sqrt((double)*dcr))/(2.0*(a1)); // Standard Formula
        *rt2=(-b1-sqrt((double)*dcr))/(2.0*(a1)); // Standard Formula
    }
    else if(*dcr<0.0) // If two complex unequal roots are present
    {
        *rt1=0;
        *rt2=0;
        i1->real=-(b1/(2.0*(a1))); // Standard Formula (real part)
        i1->img=(sqrt(-*dcr))/(2*(a1)); // Standard Formula (complex part)
    }
}
/*
* output function receives one parameter:
* Input parameters :double a2,b2,c2 and double dcr1
* Output parameters Prints: Roots of the Quadratic Equation
* Return parameter : none
*/
void output(double rto1, double rto2, struct complex io1, double dcro1) // Outputs the required roots
{
    if(dcro1==0.0) // If one root/two equal  roots are present
    {
        printf("There is one root and it is %.2lf\n",rto1);
    }
    else if(dcro1>0.0) // If two real unequal roots are present
    {
        printf("There are two real roots i.e. %.2lf and ",rto1);
        printf("%.2lf\n",rto2);
    }
    else if(dcro1<0.0) // If two complex unequal roots are present
    {
        printf("There are two complex roots i.e. %.2f + %.2fi and %.2f - %.2fi",io1.real,io1.img,io1.real,io1.img);
    }
}
