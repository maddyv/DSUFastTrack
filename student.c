#include <stdio.h> // Import I/O Package
typedef struct student // Define student structure
{
    int rollno;
    char name[20];
    char dept[5];
    int marks;
    char grade[2];
} std;
void input(int* ri, int ni, std sti[ni]) // Input function
{
    for(int i1=0;i1<ni;i1++)
    {
        printf("Enter the roll number: \n");
        scanf("%d",&(sti[i1].rollno));
        printf("Enter the name: \n");
        scanf("%s",&(sti[i1].name));
        printf("Enter the Department: \n");
        scanf("%s",&(sti[i1].dept));
        printf("Enter the marks: \n");
        scanf("%d",&(sti[i1].marks));
        printf("Enter the grade: \n");
        scanf("%s",&(sti[i1].grade));
    }
    printf("Enter the roll number to be found: ");
    scanf("%d",ri);
}
void getlen(int* ni1) // Gets array length
{
    printf("Enter the number of students: \n");
    scanf("%d",ni1);
}
int find(int n1,std st1[], int rf) // Uses Linear search to find the student
{
    for(int i=0;i<n1;i++)
    {
        if(st1[i].rollno==rf)
        {
            return i; // Returns the index if found
        }
    }
    return -1; // Returns -1 which is used for a default case
}
void output(int o1,std st1[])
{
    if(o1!=-1) // If student is found, prints the required details
    {
        printf("Roll number: %d \n",st1[o1].rollno);
        printf("Name: %s \n",st1[o1].name);
        printf("Department: %s \n",st1[o1].dept);
        printf("Marks: %d \n",st1[o1].marks);
        printf("Grade: %s \n",st1[o1].grade);
    }
    else // Default case
    {
        printf("Record not found.");
    }
}
int main() // Main function
{
    int n=0; // Init number of students var
    getlen(&n); // Gets array length
    std st[n]; // Init array of structures
    int r; // Init search term var
    input(&r,n,st); // Call Input function
    output((find(n,st,r)),st); // Call output function using find() to get two values
    return 0; // Program Termination
}
