#include <stdio.h>
#include <stdlib.h>
void input(int ri1, int ci1, int ai[ri1][ci1]) // Input function
{
	printf("Enter the matrix: (in order of rows): \n"); // Request for input
	for(int i=0;i<ri1;i++)
	{
		for(int j=0;j<ci1;j++) //Input loop
		{
			scanf("%d",&ai[i][j]);
		}
	}
}
void getlen(int* ri, int* ci) // Function to get array length
{
	printf("Enter the rows of the matrix: \n"); // Request for input
	scanf("%d",ri);
	printf("Enter the columns of the matrix: \n"); // Request for input
	scanf("%d",ci);
}
void matrix_multiply(int rc1,int cc1, int rc2, int cc2, int mc1[rc1][cc1], int mc2[rc2][cc2], int rc[rc1][cc2])
{
    if(cc1==rc2) // If condition for matrix multiplication
    {
        for(int i2=0;i2<rc1;i2++) // Row loop
        { // Loop to init the whole array to zero
            for(int j2=0;j2<cc2;j2++) // Column loop
            {
                rc[i2][j2]=0;
            }
        }
        for(int i1=0;i1<rc1;i1++) // Row loop
        {
           for(int j1=0;j1<cc2;j1++) // Column loop
           {
              for(int k=0;k<cc1;k++) // Multiplication  loop
              {
                  rc[i1][j1]+=mc1[i1][k]*mc2[k][j1];
              }
           }
        }
    }
    else
    {
        printf("The no. of columns of the first matrix should be equal to the no. of rows of the second matrix.");
        exit(0);
    }
}
void output(int ro, int co, int ao[ro][co]) // Output function
{
    printf("The multiplied matrix is: \n");
	for(int io1=0;io1<ro;io1++) // Row loop
	{
		for(int jo1=0;jo1<co;jo1++) // Column loop
		{
			printf("%d \n",ao[io1][jo1]);
		}
	}
}
int main() // Main function
{
	int r1,c1,r2,c2; // Init length var
	getlen(&r1, &c1); // Inputs length
	int m1[r1][c1]; // Init 1st matrix
	input(r1,c1,m1); // Calls Input function
	getlen(&r2, &c2); // Inputs length
	int m2[r2][c2]; // Init 2nd matrix
	input(r2,c2,m2); // Calls input function
    int rs1[r1][c2]; // Init result matrix
	matrix_multiply(r1,c1,r2,c2,m1,m2,rs1); // Multiplies matrix
	output(r1,c2,rs1); // Prints result matrix
	return 0; // Program termination
}
