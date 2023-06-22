#include<stdio.h>
struct student
{
	int rollno;
	char name[100];
	int m1;
	int m2;
	int m3;
	int t;
	int p;
};
int main()
{
	int n,i,t,p;
	printf("enter the no.of students");
	scanf("%d",&n);
	struct student stu[n];
	struct student *ptr=&stu[n];
	for(i=0;i<n;i++)
	{
		printf("enter the student %d details\n",i+1);
		printf("enter the student %d RollNo:",i+1);
		scanf("%d",&ptr[i].rollno);
		printf("enter the student %d Name",i+1);
		scanf("%s",&ptr[i].name);
		printf("student %d marks of m1",i+1);
		scanf("%d",&ptr[i].m1);
		printf("student %d marks of m2",i+1);
		scanf("%d",&ptr[i].m2);
		printf("student %d marks of m3",i+1);
		scanf("%d",&ptr[i].m3);
		ptr[i].t=ptr[i].m1+ptr[i].m2+ptr[i].m3;
	ptr[i].p=ptr[i].t/4;
	}

	for(i=0;i<n;i++)
	{
		printf("student %d details\n",i+1);
		printf("RollNo:%d\n",ptr[i].rollno);
		printf("Name %s\n",ptr[i].name);
		printf("marks %d\n",ptr[i].m1);
		printf("marks %d\n",ptr[i].m2);
		printf("marks %d\n",ptr[i].m3);
		printf("total marks; %d",ptr[i].t);
		printf("percentage is %d ",ptr[i].p);
	}
}
