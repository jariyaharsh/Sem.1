#include<stdio.h>

void main(){
	int i;
	char a[100],b[100];
	
	printf("enter an elements 1:");
	gets(a);
	
	printf("enter an elements 2:");
	gets(b);
	
	for(i=0;b[i]!='\0';i++){
		
		a[i]=b[i];
	}
	printf("%s",a);
}
