#include<stdio.h>
void main()
{
	int a=4,*p,*y,*z,*x;
	float b=4.2354;
	double c=54.56484;
	char d='A'; 
	p=&a;
	y=&b;
	z=&c;
	x=&d;
	//printf("value=%d\n",*p);
	printf("Adress=%d\n",p);
	
	//printf("value=%d\n",*y);
	printf("Adress=%d\n",y);
	
	//printf("value=%d\n",*z);
	printf("Adress=%d\n",z);
	
	//printf("value=%d\n",*x);
	printf("Adress=%d\n",x);
	
}
