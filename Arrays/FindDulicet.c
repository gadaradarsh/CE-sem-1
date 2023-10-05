#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,1,2},i,j,ctr=0;
    for (i=0;i<5;i++)
    
    {
       for (j=i+1;j<=4;j++)
      { if (arr[i]==arr[j])
       {
        ctr++;
       }}
    }
    printf("No. of dublicate element =%d",ctr);
}
