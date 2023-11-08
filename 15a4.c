#include<stdio.h>

void main(){

	int i,n,k,a[5],flag=0;
	
	
	printf("enter an integer val:");
	scanf("%d",&n);
    printf("enter an integer val:");
	scanf("%d",&k);
	for(i=0;i<n;i++){
	
	printf("arr[%d]",i);
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++){
		if(a[i]==k){
			flag=1;
			break;
		}
		else{
			printf("not found");
		}
	}
}
