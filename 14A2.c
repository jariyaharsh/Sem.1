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
			if(a[i]>0){
				
				b++;
		}
		
		else{
		    
			c++;
		}
				
	}
     	printf("Positive: %d\n",b);
		printf("Negetive:%d",c);
}
