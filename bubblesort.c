#include <stdio.h> // Import I/O Package
void input(int li, int a[]) // Input function
{
    printf("Enter the elements: \n"); // Request for input
    for(int i=0;i<li;i++) // Loop to input elements
    {
        scanf("%d",&a[i]); // Scans an integer to 'i'th index of array
    }
}
void bubble_sort(int l1,int ar1[]) // Sort function
{
    int temp=0; // Init temp var
    for(int i=0;i<l1-1;i++) // Bubble Sort Algorithm
    {
        for(int j=0;j<l1-i-1;j++)
        {
            if(ar1[j]>ar1[j+1]) // Interchange of elements if condition is satisfied
            {
                temp=ar1[j];
                ar1[j]=ar1[j+1];
                ar1[j+1]=temp;
            }
        }
    }
}
void output(int lo, int  ar2[]) // Output function definition
{
    printf("The elements of the sorted array are: \n");
    for(int i1=0;i1<lo;i1++) // Displays array elements
    {
        printf("%d \n",ar2[i1]);
    }
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
    bubble_sort(l,arr); // Call sort function
    output(l,arr); // Call output function
    return 0; // Terminates program
}
