#include <stdio.h>
void read(int ai, int bi, int ci);
int main()
{	
	int a, b, c;	
	read(a,b,c);
	return 0;
}
void read(int ai, int bi, int ci)
{	
	printf("Enter co-efficient \'a\' ");
	scanf("%d",&ai);
	printf("Enter co-efficient \'b\' ");
	scanf("%d",&bi);
	printf("Enter co-efficient \'c\' ");
	scanf("%d",&ci);	
}


