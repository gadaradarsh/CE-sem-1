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
		//input for b matrix

		int b[n][n];
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					printf("b[%d][%d] = ",i,j);
		    		scanf("%d",&b[i][j]);
				}		
		}














//ADDITION 
int add[n][n];
printf("ADDITION OF MATRIX\n");
for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					add[i][j]=a[i][j]+b[i][j];
				}		
		}

for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					printf(" %d ",add[i][j]);
				}	
                printf("\n");	
		}
//MULTIPLICATION OF MATRIX
int mult[n][n];
int k;
printf("MULTIPLICATION OF MATRIX\n");
 for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mult[i][j] = 0;
        }
    }
 for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            for(int k = 0; k < 3; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }





        for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{ printf(" %d ",mult[i][j]);
				}	
                printf("\n");	
		}


//TRANSPOSE OF A

int trans[n][n];								//it is complusary to initialias array with 0 uoutside the loop
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
// //if want to do without using another arrays
// logic :int temp = arr[i][j];  but here condition fot j=i+1
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;

	return 0;		}