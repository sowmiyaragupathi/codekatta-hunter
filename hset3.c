//program for index array
#include <stdio.h>
int main(void) {
	int a[100],j,n;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
		for(j=0;j<n;j++)
		{
			if(a[j]==j)
				{
					 printf("%d ",j);
   			        }
		}
	return 0;
}
