

// FIRST METHOD

#include<stdio.h>
int main ()
{
    int arr[6]={1,2,3,1,5,2};
    int i , j;
 int ctr[6];
            // for counting 
        for (i=0;i<6;i++)
        { ctr[i]=1;
             for (j=i+1;j<6;j++)
             {
                    if ( arr[i]==arr[j]){ctr[i]++;
                    arr[j]=0;}
             }    
        }

    //for printing 
    for (i=0;i<6;i++)
        { if (arr[i]==0)continue;
        else  printf("%d : %d times\n",arr[i],ctr[i]); 

            
            
    }
    
    
    
    
    
    
    
    }




//     //SECOND METHOD 


//     #include <stdio.h>
// int main() {
//     int arr[7] = {1, 1, 2, 3, 4, 1, 2};
//     for (int i = 0; i < 7; i++) {
//         int count = 0;
//         int isPrinted = 0;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {   // this loop is for checking 
//                 isPrinted = 1;        // that element is checked for first time 
//                 break;
//             }
//         }
//         if (!isPrinted) {                       // if  samr element occurs for 2nd or 3rd time 
//             for (int j = 0; j < 7; j++) {       // it is not checked 
//                 if (arr[i] == arr[j]) {
//                     count++;
//                 }
//             }
//             printf("%d is repeated for %d times\n", arr[i], count);
//         }
//     }    
//     return 0;
// }
