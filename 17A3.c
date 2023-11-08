#include<stdio.h>
void main()
{
	int a,b,*x,*y;
	scanf("%d %d",&a,&b);
	x=&a;
	y=&b;
	printf("%d",a+b);
}
