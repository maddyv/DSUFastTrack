#include <stdio.h> // Import I/O Header
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
void trp(int lt,int ar1[lt][lt],int ar2[lt][lt]) // Transpose function
{
    for(int i1=0;i1<lt;i1++) // Row loop
    {
        for(int j1=0;j1<lt;j1++) // Column loop
        {
            ar2[j1][i1]=ar1[i1][j1]; // Transpose formula
        }
    }
}
void output(int lo,int aro1[lo][lo],int aro2[lo][lo]) // Output Function
{
    int ch=0; // Init pseudo-boolean var
    for(int i2=0;i2<lo;i2++) // Row loop
    {
        for(int j2=0;j2<lo;j2++) // Column loop
        {
            if(aro1[i2][j2]!=aro2[i2][j2]) // Checks for any inequality
            {
                ch=1; // Changes var to negative if not equal
            }
        }
    }
    if(ch==0)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
}
int main() // Main function
{
    int l; // Init length var
    getlen(&l); // Inputs length
    int arr[l][l]; // Init array
    int art[l][l]; // Init transpose array
    input(l,arr); // Calls Input function
    trp(l,arr,art); // Calls Transpose function
    output(l,arr,art); // Calls output function
    return 0; // Program termination
}
