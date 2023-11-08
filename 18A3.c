#include<stdio.h>
void i(float p,float r,float n);
void main(){
	float p,r,n;
	printf("enter p:");
	scanf("%f",&p);
	printf("enter r:");
	scanf("%f",&r);
	printf("enter n:");
	scanf("%f",&n);
	i(p,r,n);
};
void i(float p,float r,float n){
	printf("Simple interest =%f",(p+r+n)/3);
}
