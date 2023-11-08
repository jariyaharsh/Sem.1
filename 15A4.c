#include<stdio.h>
void main()
{
	int n,a[n],i,b,d;
	printf("Enter the number of series:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter array :");
	scanf("%d",&a[i]);
	}
	printf("Enter search element:");
	scanf("%d",&b);
	for(i=0;i<n;i++){
		if(a[i]==b){
			printf("%d is available in array",a[i]);
		}
	}
}
