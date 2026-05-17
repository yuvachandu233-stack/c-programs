#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	float cgpa;
	char name[50];
}s1;
int main(){
	s1.rollno=34;
	s1.cgpa=9.9;
	strcpy(s1.name,"chandu");
	printf("student s1=%d\n",s1.rollno);
	printf("student s1=%.2f\n",s1.cgpa);
	printf("student s1=%s\n",s1.name);
	return 0;
}