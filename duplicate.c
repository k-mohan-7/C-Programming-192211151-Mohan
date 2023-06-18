//code for removing duplicates
#include<stdio.h>
void main ()
{
	int n,i,j,k,a[100];
	printf("enter the number of elements");
	scanf("%d",&n);
	k;
	for(i=0;i<n;i++)
	{
		printf("enter the %d element ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
			  for(k=j;k<n-1;k++)
			   {a[k]=a[k+1];
				   }	
				   n--;
				   j--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	}
