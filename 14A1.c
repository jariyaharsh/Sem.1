#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the number of series:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter a no. :");
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d",a[i]);
	}
}
