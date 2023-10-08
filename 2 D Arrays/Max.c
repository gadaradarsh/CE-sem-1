#include<stdio.h>
int main(){
    int max=-1;
     int n,m;
    printf("ENTER NO. ROW : ");
    scanf("%d",&n);
     printf("ENTER NO. COULMN : ");
    scanf("%d",&m);


    int arr[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            
                scanf("%d",&arr[i][j]);
}
}
   for (i=0;i<n;i++)
   for (j=0;j<m;j++)
  { { if (max<arr[i][j]) {
    max=arr[i][j];
   }}
    
   } printf("MAX ELEMENT IS :%d",max);
}