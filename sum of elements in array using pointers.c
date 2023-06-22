#include<stdio.h>
void main()
{
	int a[100];
	int n,i;
	int c=0;
	int *p;
	p=a;
	printf("enter no.of element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d element",i+1);
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		c+=p[i];
	}
	printf("the sum of elements in array is %d",c);
}
