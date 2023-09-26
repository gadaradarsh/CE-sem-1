#include<stdio.h>
int main(){
    int max=-1,i;
    int arr[5]={1,3,4,6,5};
   for (i=0;i<5;i++)
   { if (max<arr[i]) {
    max=arr[i];
   }
    
   } printf("%d",max);
}