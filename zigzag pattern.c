#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the no.of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
			{
			printf("* ");
		}
		else if(j>=0)
		{
			printf("  ");
		}
	}
	
		for(j=0;j<=n-i;j++)
		{
			if(j==n-i)
			{
				printf("* ");
			}
			else if(j>0)
			{
				printf("  ");
			}
		}
		printf("\n");
    }
}
