#include<stdio.h>

//structure declaration
typedef struct book
{ //declaration by method three 
    int bookno;
    char name [20];
    int price;
} darsh;
int main()
{// declraing stucture variable by using word darsh 
    darsh b1;//this 
     printf("ENTER");
scanf("%d%s%d",&b1.bookno,b1.name,&b1.price);//b1.bookno is stucture member
printf("%d%s%d",b1.bookno,b1.name,b1.price);

}