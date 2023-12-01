#include<stdio.h>
#include<string.h>
//structure declaration
typedef struct 
{ int rollno;
char name[100];
int marks;
} darsh;
int main()
{
     //structure variable declaration
 darsh student[4];
 //initialisation by for loop 
 int i ;
 for(i=0;i<4;i++)
 {
    student[i].rollno=i;
    strcpy(student[i].name,"darsh");
    student[i].marks=100+i;
 }
//finding max marks 
int max =student[0].marks;
int index=0;
for(i=0;i<4;i++)
{
    if(max<student[i].marks)
    {max=student[i].marks;
    index=i;}
}
//printing info
printf("TOPPER\nNAME:%s\nROLL NO:%d\nMARKS:%d",student[index].name,student[index].rollno,student[index].marks);
}