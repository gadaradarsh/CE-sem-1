#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number : ");
	scanf("%d",&n);



	//intput of a matrix
	int a[n][n];
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					printf("a[%d][%d] = ",i,j);
		    		scanf("%d",&a[i][j]);
				}		
		}

        
//TRANSPOSE OF A

int trans[n][n];                                 //it is complusary to initialias array with 0 uoutside the loop
                                                // other it will print upertriangular matrix  
for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            trans[i][j] = 0;
        }
    }


printf("TRANSPOSE OF MATRIX \n");
 for(i=0;i<n;i++)
		{  
			for(j=0;j<n;j++)
				{
                    trans[j][i]=a[i][j];
				}	
               	
		}
          for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{ printf(" %d ",trans[i][j]);
				}	
                printf("\n");	
		}

        



        //reveesing each row
        printf("ROTATED MATRIX :\n") ;
        int k = n-1;
        j=0;
        int temp;
        while (j<k)
        {    for (i=0;i<n;i++)
         { temp=trans[i] [j];
            trans[i][j]=trans[i][k];
            trans[i][k]=temp;
            j++;
            k--;}
        }
        

        for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{ printf(" %d ",trans[i][j]);
				}	
                printf("\n");	
		}




}