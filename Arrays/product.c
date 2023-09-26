#include<stdio.h>
int main(){
    int size,i,product=1  ;
    printf("enter size :");
	scanf("%d",&size );
	 int arr[size];
	 for (i=0;i<size ;i++){
	 	    printf("enter arr :");

	 	scanf("%d",&arr[i]);
	 	 product=product*arr[i];
	 }
	 printf("%d",product);
	 }