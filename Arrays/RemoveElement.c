 
 
 #include<stdio.h>
int main()
{ int arr[5]={1,2,3,4,5},i,j;
    //for knowning position of element
    printf("ENTER POSTION (index no.) OF ELEMENT : \n");
    scanf("%d",&j);
//shifting values
    for (i=j;i<5;i++)
    {
        arr[i]=arr[i+1];
    }
    //printing elements
    for (i=0;i<4;i++)
         printf("%d\n",arr[i]);

    }