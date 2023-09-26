#include<stdio.h>
int main(){
    int max=-1,i,smax=-1;// #include<limit> nathi karvu 
    int arr[5]={1,3,4,6,5};
   for (i=0;i<5;i++)
   { if (max<arr[i]) {
    max=arr[i];
   }
   for (i=0;i<5;i++)
   { if (smax<arr[i]&&smax<max) {
    smax=arr[i];
   }
    
   } printf("%d",smax);
}