#include <stdio.h>
#include <string.h>
void main(){
	char str[1000];
	int i;
	printf("Enter the String: ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++);
	printf("Length of String is : %d", i);
}
