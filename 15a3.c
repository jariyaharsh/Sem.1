#include<stdio.h>

void main(){
	
	int a[10],i,n,count=0;
	
	printf("enter an number of value:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter element of a:");
		scanf("%d",&a[i]);
		if(a[i]%3==0){
			count++;
		}
		
	}
	printf("divisibel by three=%d:",count);
}
