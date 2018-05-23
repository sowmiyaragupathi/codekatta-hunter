#include <stdio.h>

int main(void) {
	int a[100],j,n,temp;
	scanf("%d",&n);
	for(j=0;j<n;j++)
		{
			scanf("%d ",&a[j]);
		}
	
		for(j=1;j<n-1;j++)
		{
			for(int k=j+1;k<n;j++)
			{
				if(a[j]=a[j+1])
					{	
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
			}
		}
		for(j=0;j<n;j++)
		{
			printf("%d",a[j]);
		}
						
	return 0;
}
