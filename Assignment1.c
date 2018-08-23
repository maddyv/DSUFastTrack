#include <stdio.h>
#include <math.h>
void read(int* ai, int* bi, int* ci);
double compute(int* a1, int* b1, int* c1);
int main()
{
	int a, b, c;
	read(&a,&b,&c);
	double rt=0.0;
	double temp=0.0;
	double dcr1=compute(&a,&b,&c);
	if(dcr1==0.0)
	{
		rt=(double)-(b/(2.0*a));
		printf("There is one root and it is %.2lf\n",rt);
	}
	else if(dcr1>0.0)
	{
		rt=(double) (-b+sqrt((double)dcr1))/(2.0*a);
		printf("There are two real roots i.e. %.2lf and ",rt);
		rt=(double) (-b-sqrt((double)dcr1))/(2.0*a);
		printf("%.2lf\n",rt);
	}
	else if(dcr1<0.0)
    {
        rt=(double)-(b/(2.0*a));
        temp=(double) (sqrt(-dcr1))/(2*a);
        printf("There are two complex roots i.e. %.2f + %.2fi and %.2f - %.2fi",rt,temp,rt,temp);
    }
	return 0;
}
void read(int* ai, int* bi, int* ci)
{
	printf("Enter co-efficient \'a\' \n");
	scanf("%d",ai);
	printf("Enter co-efficient \'b\' \n");
	scanf("%d",bi);
	printf("Enter co-efficient \'c\' \n");
	scanf("%d",ci);
}
double compute(int* a1, int* b1, int* c1)
{
	double dcr=(double) ((*b1)*(*b1))-(4.0*(*a1)*(*c1));
	return dcr;
}

