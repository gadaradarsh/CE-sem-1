/*#include<stdio.h>
int main (){int i,j,s1,k,arr[s1],fr[s1],crt;
printf("ENTER  SIZE OF ARRAYS :");
scanf("%d",&s1);

   for (i = 0; i < s1; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
        fr[i]=-1;

    }

    for (i=0;i<s1;i++){
        crt=1;
        for (k=i+1;k<s1;k++)
    { if (arr[i]==arr[j]){crt++; fr[j]=0;}


       if(fr[i]!=0)
        {
            fr[i] = crt;
        }
    
    }
    }
    
    
    
    
     for(i=0; i<s1; i++)
    {
        if(fr[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], fr[i]);
        }
    }
}*/





#include <stdio.h>

void main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;
	
	
       printf("\n\nCount frequency of each element of an array:\n");
       printf("------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
		  fr1[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}
