#include<stdio.h>
struct student
{
   char name[20];
   int id;
   int class;
   struct credit
   {
    int mathsmarks;
    int scimarks;
    int ssmarks;
   }variable;

};


int main()
{ struct student darsh;
 struct student dg;
 scanf("%s %d %d %d %d %d",darsh.name,&darsh.id,&darsh.class,&darsh.variable.mathsmarks,&darsh.variable.scimarks,&darsh.variable.ssmarks );
printf("%s\n %d\n %d\n %d\n %d\n %d\n",darsh.name,darsh.id,darsh.class,darsh.variable.mathsmarks,darsh.variable.scimarks,darsh.variable.ssmarks );
}