#include<stdio.h>
int main()



{
    int arr[5]={1,2,3,5},i,j;
    //for knowning position of element
    printf("ENTER POSTION (index no .)OF ELEMENT : \n");
    scanf("%d",&j);
    

int temp=j;
    //for arranging remaining elements of arrays 
    for (i=temp+1;i<5;i++)
    { arr[i]=arr[temp];

    }
    //first we shifted the value of elements
    //input new value 
    printf("ENTER VAULE OF ELEMENT : \n");
    scanf("%d",&arr[j]);
    for (i=0;i<5;i++)
    {printf("%d",arr[i]);}
}