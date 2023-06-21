#include<stdio.h>
void main()
{
	int p,q,k,i,h,e;
	printf("enter the p starting value");
scanf("%d",&p);
printf("enter the q ending value");
scanf("%d",&q);
printf("enter the k exept value");
scanf("%d",&k);
/*for(i=p;i<q;i++)
{*/
	h=p;
	while(h<=q)
	{
		e=h%10;
		if(e==k)
		{
			//printf("");
		}
		else
		{
		printf("%d ",h);
	}
	h++;	
	}
			
//}
}
