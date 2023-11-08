#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,*p;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++){
		p=&a[i];
		printf("%d",a[i]);
	}
	
}
