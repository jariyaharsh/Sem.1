#include<stdio.h>
void main()
{
	int a,*p;
		printf("Enter value =",a);
    scanf("%d",&a);
	p=&a;
	
	printf("value=%d\n",*p);
	printf("Adress=%d",p);
}
