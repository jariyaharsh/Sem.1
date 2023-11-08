#include<stdio.h>
void main()
{
	int n,a[n],b[n],i,j;
	printf("Enter the number of series:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter array :");
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		b[i]=a[i];
		printf("%d",b[i]);
	}	
}
