#include<stdio.h>
void main()
{
	int i,l=0;
	char str[100];
	printf("Enter string:");
	scanf("%s",&str);
	for(i=0;str[i]!=0;i++){
		
		l++;
	}
	printf("%s\n",str);
	printf("%d",l);
}
