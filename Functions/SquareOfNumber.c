#include<stdio.h>
int sqrt(int n )
{
    int result;
    result=n*n;
    return result ;

}















int main()
{  int n ;

    printf("ENTER NO. :");
    scanf("%d",&n);
    int sqrt1= sqrt(n)  ;
    printf("SQUARE : %d",sqrt1);
}