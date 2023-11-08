#include<stdio.h>
void fun(int a,int b);
void main(){
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	fun(a,b);
};
void fun(int a,int b){
	if(a>b){
		printf("max=%d\n",a);
		printf("min=%d",b);
	}
	else{
		printf("max=%d\n",b);
		printf("min=%d",a);
	}
}
