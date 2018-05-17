//program to find the kth largest position in the sorted array
#include <stdio.h>

int main(void) {
	int n,a[100],i,k,temp,j;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<=n;i++)
		{
		
			if(i==k)
			{
				printf("%d ",a[i]);
			}
		}
      return 0;
}
