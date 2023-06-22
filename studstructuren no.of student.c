#include<stdio.h>
struct student
{
	int rollno;
	char name[100];
	int marks;
};
int main()
{
	int n,i;
	printf("enter the no.of students");
	scanf("%d",&n);
	struct student stu[n];
	for(i=0;i<n;i++)
	{
		printf("enter the student %d details\n",i+1);
		printf("enter the student %d RollNo:",i+1);
		scanf("%d",&stu[i].rollno);
		printf("enter the student %d Name",i+1);
		scanf("%s",&stu[i].name);
		printf("student %d marks",i+1);
		scanf("%d",&stu[i].marks);
	}
	for(i=0;i<n;i++)
	{
		printf("student %d details\n",i+1);
		printf("RollNo:%d\n",stu[i].rollno);
		printf("Name %s\n",stu[i].name);
		printf("marks %d\n",stu[i].marks);
	}
}
