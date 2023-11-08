#include<stdio.h>
void main()
{
	int n,i,b=0,c=0;
	printf("Enter the number of series:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter a no. :");
		scanf("%d",&a[i]);
		
	}
		for(i=0;i<n;i++){
			if(a[i]%2==0){
			printf("even: %d\n",a[i]);
		}
		
		else{
		    printf("odd:%d",a[i]);
		}
				
	}
     	/*printf("Positive: %d\n",b);
		printf("Negetive:%d",c);*/
}
