#include <stdio.h> // Import I/O Package
void input(int li, int a[],int* si) // Input function
{
    printf("Enter the elements of the array: \n"); // Request for input
    for(int i=0;i<li;i++) // Loop to input elements
    {
        scanf("%d",&a[i]); // Scans an integer to 'i'th index of array
    }
    printf("Enter the  search term \n"); // Request for input
    scanf("%d",si); // Input search term
}
int binary_search(int l1,int ar1[],int t1) // Sort function
{
    int max=l1; // Init maximum boundary
    int min=0; // Init minimum boundary
    int mid; // Iinit middle var
    while(min<=max)
    {
        mid=(max+min)/2; // Gives mid a new value every loop
        if(ar1[mid]==t1) // If element is found
        {
            return mid;
        }
        else if(ar1[mid]<t1) // If element is lesser than search term
        {
            min=mid+1;
        }
        else if(ar1[mid]>t1) // If element is greater than search term
        {
            max=mid-1;
        }
    }
    if(ar1[mid]!=t1) // If element is not found
    {
        return -1;
    }
}
void output(int  so,int ko) // Output function definition
{
    if(ko!=-1) // If default case, key position is -1
    {
        printf("%d is found at index %d. ",so,ko);
    }
    else
    {
        printf("The element was not found. ");
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
    int s=0; // Init search term var
    input(l, arr, &s); // Call input function
    binary_search(l,arr,s); // Call search function
    output(arr[binary_search(l,arr,s)],binary_search(l,arr,s)); // Call output function
    return 0; // Terminates program
}
