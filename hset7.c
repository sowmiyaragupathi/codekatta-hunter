#include <stdio.h>

int main(void) {
	int a[100],j,n;
	scanf("%d",&n);
	for(j=0;j<n;j++)
		{
			scanf("%d ",&a[j]);
		}
		for(j=1;j<n;j=j+2)
		{
			if(a[j]%2==0)
			{
				printf("%d ",a[j]);
			}
		}
		for(j=0;j<n;j=j+2)
		{
			if(a[j]%2==1)
			{
				printf("%d ",a[j]);
			}
		}

	return 0;
}
