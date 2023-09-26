#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,0},i,j,k,num=0;
    for (i=0;i<5;i++)
       { for (j=i+1;j<5;j++)
           { for (k=j+1;k<5;k++){
                if (arr[i]+arr[j]+arr[k]==6){
                        num++;
                        printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                }
            }}}

}