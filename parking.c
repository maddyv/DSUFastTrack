#include <stdio.h>
#include <math.h>
void input(float* time, char* ty);
int get_fare(float ti, char tp);
void output(float to, char po);
int main()
{
    float t;
    char ch;
    input(&t,&ch);
    output(t,ch);
    return 0;
}
void input(float* time, char* ty)
{
    printf("Enter time parked (in hours):\n ");
    scanf("%f", time);
    printf("Enter type of vehicle: \n");
    scanf("%c", ty);
}
int get_fare(float ti, char tp)
{
    int rt;
    int t1=(int) ceil(ti); // Rounding off to reflect actual parking fare systems
    switch(tp)
    {
        case 'c':
            if(t1<=2)
            {
                rt=20*t1;
            }
            else
            {
                rt=40+(30*(t1-2));
            }
        case 'b':
            if(t1<=4)
            {
                rt=40*t1;
            }
            else
            {
                rt=160+(50*(t1-4));
            }
        case 't':
            if(t1<=3)
            {
                rt=30*t1;
            }
            else
            {
                rt=90+(40*(t1-3));
            }
        default:
            return -1;
    }
}
void output(float to, char po)
{
    int r=get_fare(to,po);
    if(r!=-1)
    {
        printf("The fare to be paid is: %d",r);
    }
    else
    {
        printf("Please enter a valid character");
    }
}
