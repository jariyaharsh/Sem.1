#include<stdio.h>
void main()
{
	int n,i,b,c,max=0,min=0;
	printf("Enter the number of series:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter a no. :");
		scanf("%d",&a[i]);
		
	}
	b=a[0];
	for(i=0;i<n;i++)
	{
		 if(b<a[i]){
		 	max=a[i];
		 }
		 if(b>a[i]){
		 	min=b;
		 }
	}
	printf("max:%d",max);
	printf("max:%d",min);
}
