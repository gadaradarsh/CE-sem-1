#include<stdio.h>
int print(int n)
{printf("%d\n",n);
if (n>=50)return;
    return print(n+1);
}
int main()
{
print(1);
}