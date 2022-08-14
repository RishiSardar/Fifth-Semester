#include<stdio.h>

struct  info
{
    int roll;
    char name[100];
    float cgpa;

};

void display(struct info *m2);

int main()
{

struct  info m1;

printf("Enter roll : \n");
scanf("%d",&m1.roll);

printf("Enter name \n");
scanf("%s",&m1.name);

printf("Enter cgpa\n");
scanf("%f",&m1.cgpa);

display(&m1);

}

void display(struct info *m2)
{

printf("Roll:%d \n",m2->roll);
printf("Name:%s \n",m2->name);
printf("CGPA:%f \n",m2->cgpa);

}