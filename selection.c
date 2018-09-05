#include <stdio.h> // Import I/O Package
void input(int li, int a[]) // Input function
{
    printf("Enter the elements: \n"); // Request for input
    for(int i=0;i<li;i++) // Loop to input elements
    {
        scanf("%d",&a[i]); // Scans an integer to 'i'th index of array
    }
}
void selection(int l1,int ar1[]) // Sort function
{
    int min=0;
    for(int i=0;i<l1-1;i++) // Selection Sort Algorithm
    {
        int temp=-1; // Init temp var
        min=i;
        for(int j=i+1;j<l1;j++) // Checks second subarray
        {
            if(ar1[j]<ar1[min]) // Selects minimum index
            {
                min=j;
            }
        }
        temp=ar1[i]; // Interchanges minimum index with first element
        ar1[i]=ar1[min];
        ar1[min]=temp;
    }
}
void output(int lo, int  ar2[]) // Output function definition
{
    printf("The minimum element is: %d \n",ar2[0]);
    printf("The maximum element is: %d \n",ar2[lo-1]);
}
void getlen(int* li1) // Function to receive length from user
{
    printf("Enter the number of elements: \n");
    scanf("%d",li1);
}
int main() // Main function
{
    int l=0; // Init length var
    getlen(&l); // Call length function
    int arr[l]; // Init array
    input(l, arr); // Call input function
    selection(l,arr); // Call sort function
    output(l,arr); // Call output function
    return 0; // Terminates program
}
