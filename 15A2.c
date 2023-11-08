#include<stdio.h>
void main()
{
	int n,a[n],c=0,i,j;
	printf("Enter the number of series:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter array a:");
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			c++;
		}
	}
	printf("negative element: %d",c);

}
