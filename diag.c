#include <stdio.h>
void input(int li,int ai[li][li]) // Input function 
{
	printf("Enter the array: (in order of rows): \n"); // Request for input
	for(int i=0;i<li;i++)
	{ 
		for(int j=0;j<li;j++) //Input loop
		{
			scanf("%d",&ai[i][j]);
		}
	}
}
void getlen(int* l1) // Function to get array length
{
	printf("Enter the size of the square matrix: \n"); // Request for input
	scanf("%d",l1);
}
void output(int lo, int ao[lo][lo]) // Output function
{
	printf("The diagonal elements are: \n"); // Prints diagonal elements
	for(int i1=0;i1<lo;i1++)
	{
		printf("%d  ",ao[i1][i1]);
	}
}	
int main() // Main function
{
	int l; // Init length var
	getlen(&l); // Inputs length
	int arr[l][l]; // Init array
	input(l,arr); // Calls Input function
	output(l,arr); // Calls output function
	return 0; // Program termination
}

