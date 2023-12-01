//thi program can be more effecient so reffer textbook



#include<stdio.h>
struct marks 
{
    int sub1;
    int sub2;
    int sub3;
    int total;
} ;

int main()
{
    //creating a structure array 
    struct marks student[5];
    //input
    int i;
    //sub total
    int sumsub1=0,sumsub2=0,sumsub3=0;
    for(i=0;i<5;i++)
    {scanf("%d",&student[i].sub1);
    scanf("%d",&student[i].sub2);
    scanf("%d",&student[i].sub3);
    sumsub1+=student[i].sub1;
    sumsub2+=student[i].sub2;
    sumsub3+=student[i].sub3;
    }
     for(i=0;i<5;i++)
     {
        student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;
     }
//printing
for(i=0;i<5;i++)
{printf("MARKS OF STUDENT %d:%d\n\n",i,student[i].total);}

printf("MARKS OF SUBJECT 1:%d\n",sumsub1);
printf("MARKS OF SUBJECT 2:%d\n",sumsub2);
printf("MARKS OF SUBJECT 3:%d\n",sumsub3);





}