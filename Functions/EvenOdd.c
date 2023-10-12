#include<stdio.h>
void evenodd(int n)
{
    if (n%2==0)
    printf("ENTERED NUMBER IS EVEN");
    else
    printf("ENTERED NUMBER IS ODD");
}
int main()
{  int n;
    scanf("%d",&n);
    evenodd(n);

}