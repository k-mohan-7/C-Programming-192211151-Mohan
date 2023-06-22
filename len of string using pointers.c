#include<stdio.h>
void main()
{
	char a[100];
	printf("enter a statement ");
	scanf("%s",a);
	int n=0;
	int c=0;
	char *p;
	p=a;
	while(p[n]!='\0')
	{
		c++;
		n++;
	}
	printf("the length of the string %s is %d",p,c);
}
