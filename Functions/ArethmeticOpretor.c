#include<stdio.h>
int add(int a , int b)
{return a+b;}
int product(int a , int b)
{return a*b;}
int subtration(int a , int b)
{return a-b;}
int modulas(int a , int b)
{return a%b;}


int main()
{ 
   int a,b ;

    printf("ENTER 1ST NO. :");
    scanf("%d",&a);

    printf("ENTER 2ND NO. :");
    scanf("%d",&b);


    printf("sum %d\n",add(a,b));
    printf("product %d\n",product (a,b));
    printf("subtration %d\n",subtration(a,b));
    printf("modulas %d\n",modulas(a,b));
    

}