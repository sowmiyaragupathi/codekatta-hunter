//program to sort the numbers by eliminating the repeated numbers in an array
#include <stdio.h>

int main(void) {
	int n,a[100],i,j,k=0,m,temp,count=0,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				b[k]=a[j];
				k++;
			}
		}
	}
if(count>0)
{
	for(k=0;k<count-1;k++)
	{
		for(m=k+1;m<count;m++)
		{
			if(b[k]>b[m])
				{
					temp=b[k];
					b[k]=b[m];
					b[m]=temp;
				}
		}
	}
}
	for(k=0;k<count-1;k++)
	{
		for(m=k+1;m<count;m++)
		{
			if(b[k]==b[m])
			{
				b[k]=b[m];
			}
		}
	}

	if(count>0)
	{
		for(k=0;k<count;k++)
		{
			printf("%d ",b[k]);
		}
	}
	else
	{
	printf("UNIQUE");
        }
	return 0;
}
