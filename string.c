#include <stdio.h> // Import I/O package
void input(char ci[]) // input function
{
    printf("Enter the String: ");
    scanf("%s",ci);
}
void getlen(int *li) // Gets length of the string from the user
{
    printf("Enter the number of characters in the String: ");
    scanf("%d",li);
}
void copy(char c1[],char c2[], int l1) // Copies one string into another
{
    for(int i=0;i<l1+1;i++) // l1+ to copy null terminator
    {
        c2[i]=c1[i];
    }
}
void output(int lo, char co[]) // Output function
{
    printf("The new string is: \n");
    int j=0; // Init counter var
    while(co[j]!='\0') // Checks for null terminator
    {
        printf("%c", co[j]); // Prints each character
        j++;
    }
    printf("\n"); // Breaks line
}
int main() // Main function
{
    int l=0; // init main length var
    getlen(&l); // Calls length function
    char ch[l]; // Init strings
    char ch2[l];
    input(ch); // Input string 1
    copy(ch,ch2,l); // Copies strings
    output(l,ch2); // Prints string 2
    return 0; // Program termination
}
