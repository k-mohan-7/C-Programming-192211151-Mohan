#include<stdio.h>
void main()
{
	int n,i,j,k,c,a[100];
	printf("enter the elementes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d",i+1);
		scanf("%d",&a[i]);
	}
	int t=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				c++;
			}
		}if(c>2)
		{
			t++;
		}
	}
	printf("no.of composite numbers = %d",t);
}
