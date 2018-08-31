#include <stdio.h>
#include <math.h>
void input(float* time, char* ty); // Input function prototype
int get_fare(float ti, char tp); // Get fare function prototype
void output(float to, char po); // Output function prototype
int main() // Main function
{
    float t; // Init vars
    char ch;
    input(&t,&ch); // Pass addresses to input function
    output(t,ch); // Call output function
    return 0; // Terminate program
}
void input(float* time, char* ty)
{
    printf("Enter type of vehicle:\n"); // Request for input
    scanf("%c", ty);
    printf("Enter time parked (in hours):\n ");
    scanf("%f", time);

}
int get_fare(float ti, char tp) // Compute function definition
{
    int rt; // Init rate var
    int t1=(int) ceil(ti); // Rounding off to reflect actual parking fare systems
    switch(tp)
    {
        case 'c': // Car case
            if(t1<=2)
            {
                rt=20*t1; // Inital fare
            }
            else
            {
                rt=40+(30*(t1-2)); // Inital fare + next fare
            }
            break;
        case 'b':
            if(t1<=4)
            {
                rt=40*t1; // Inital fare
            }
            else
            {
                rt=160+(50*(t1-4)); // Inital fare + next fare
            }
            break;
        case 't':
            if(t1<=3)
            {
                rt=30*t1; // Inital fare
            }
            else
            {
                rt=90+(40*(t1-3)); // Inital fare + next fare
            }
            break;
        default:
            return -1; // Return number to print message to signify invalid input
    }
}
void output(float to, char po) // output function definition
{
    int r=get_fare(to,po); // Rate var
    if(r!=-1) // If valid input
    {
        printf("The fare to be paid is: %d",r);
    }
    else
    {
        printf("Please enter a valid character");
    }
}
