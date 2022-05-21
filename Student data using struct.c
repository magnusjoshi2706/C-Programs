// Program 2 : Program regarding to creat one database where we stored all the student information and get it

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
struct students 
{   int rollno;
    char name[20];
    float marks;  
}s;

int main()
{
    struct students s;
    printf("------------ welcome to school dairy or record of the students ----------------\n");
    printf("how many students you want to add\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("enter the %d student details\n",i+1);    
    printf("name:\n");
    scanf("%s",&s.name);
    printf("roll no:\n");
    scanf("%d",&s.rollno);
    printf("marks:\n");
    scanf("%f",&s.marks);
    }
    
    printf("---------Now you can see all students information --------------\n");
    printf("available students is no is ------>\n");
    for(int i=0;i<n;i++)
    {
    
    printf("information of %d student is :\n",i+1);
    printf("name :%s\n",s.name);
    printf("roll no:%d\n",s.rollno);
    printf("marks : %f\n",s.marks);
    
    }
    return 0;
}