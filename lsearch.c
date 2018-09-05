#include <stdio.h> // Import I/O Package
void input(int li, int a[], int* si) // Input function
{
    printf("Enter the elements: \n"); // Request for input
    for(int i=0;i<li;i++) // Loop to input elements
    {
        scanf("%d",&a[i]); // Scans an integer to 'i'th index of array
    }
    printf("Enter the element to be found: \n");
    scanf("%d",si);
}
int search(int l1,int ar1[], int sc) // Search function
{
    for(int j=0;j<l1;j++) // Linear search
    {
        if(ar1[j]==sc)
        {
            return j; // Returns index and breaks loop
        }
    }
}
void output(int idxo) // Output function definition
{
    printf("The element is found at index %d \n",idxo); // Prints index
}
void getlen(int* li1) // Function to receive length from user
{
    printf("Enter the number of elements: \n");
    scanf("%d",li1);
}
int main() // Main function
{
    int s=0; // Init Search Term var
    int l=0; // Init length var
    getlen(&l); // Call length function
    int arr[l]; // Init array
    input(l, arr,&s); // Call input function
    int dx1=search(l,arr,s); // Call search function
    output(dx1); // Call output function
    return 0; // Terminates program
}
