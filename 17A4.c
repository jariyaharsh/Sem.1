#include<stdio.h>
void main()
{
	int a,b,*x,*y,*t;
	printf("Enter a and b:");
	scanf("%d %d",&a,&b);
	x=&a;
	y=&b;
	
	t=&a;
	x=&b;
	y=&a;
	printf("swap number is =%d,",*x);
	printf("%d",*y);
}
