#include <stdio.h> // Include Standard I/O package
void input(int* mrk); // Input function prototype
void print_grade(int mk); // Grade function prototype
int main() // Main function
{
    int m; // Init main marks var 
    input(&m); // passing address to input function
    print_grade(m); // Calling grade function
    return 0; // Program termination
}
void input(int* mrk) // input function definiton
{ 
    printf("Enter the marks: "); // Request for input
    scanf("%d",mrk);
}
void print_grade(int mk) // Grade function definition
{ // Condition checking begins
    if(mk>=95) 
    {
        printf("Grade A1");
    }
    else
    {
        if(mk>=85)
        {
            printf("Grade A2");
        }
        else 
        {
            if(mk>=75)
            {
                printf("Grade B1");
            }
            else 
            {
                if(mk>=60)
                {
                    printf("Grade B2");
                }
                else
                {
                    if(mk>=45)
                    {
                        printf("Grade C1");
                    }
                    else
                    {
                        if(mk>=40)
                        {
                            printf("Grade C2");
                        }
                        else
                        {
                            if(mk>=35)
                            {
                                printf("Grade D1");
                            }
                            else
                            {
                                if(mk>=30)
                                {
                                    printf("Grade D2");
                                }
                                else
                                {
                                    printf("E1 (Fail)");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
} // Condition checking ends
