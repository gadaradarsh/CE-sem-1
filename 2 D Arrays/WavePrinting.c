#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number : ");
	scanf("%d",&n);



	//intput of a matrix
	int a[n][n];
	for(i=0;i<n;i++)                                                        //1  2  3 
                                                                            //4  5  6
		{                                                                   //7  8  9
			for(j=0;j<n;j++)                                                                        
				{
					printf("a[%d][%d] = ",i,j);
		    		scanf("%d",&a[i][j]);
				}		
		}



        for (j=0;j<n;j++)
        {
            for (i=0;i<n;i++)
            {
                printf("%d",a[i][j]);

            }
        printf("\n");
        }







}