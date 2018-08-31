#include <stdio.h> // Import I/O package
void input(int* ai) // Input function
{
	printf("Enter the number of rows: ");  // Request for input
	scanf("%d",ai); 
}
void print_triangle(int n) // Triangle function
{
	int sp=n; // Var to store no. of spaces before every row
	char spc='\0'; // Init char to null to enable use of width specifier
	for(int i=0;i<n;i++) // Row loop
	{
		printf("%*c",sp,spc); // Print right number of spaces
		sp--;	// Decrement space var every row
		for(int j=2;j<=i+2;j++) // Print character
		{
			printf("* ");
		}
		printf("\n"); // Breaks line
	}
}
int main() // Main funtion
{
	int num; // init main var
	input(&num); // Call input function
	print_triangle(num); // Call Triangle function
	return 0; // Terminate program
}

