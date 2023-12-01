#include<stdio.h>
int exp_r(int ,int );
int main(){
	int x,a,b;
	printf("enter the number ");
	scanf("%d",&a);
	printf("enter the number ");
	scanf("%d",&b);
	x=exp_r(a,b);
	printf("ANS. = %d",x);
	return 0;
}
int exp_r(int a ,int b)
{
	if(b==0)
	return 1;
	else{
	int t = exp_r(a,b-1);

	 printf("%d\n",t*2);
	 return(a*t);
}
}