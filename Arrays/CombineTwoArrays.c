#include <stdio.h>
int main() {
    int s1, s2, s3, i, j, k;

    // Input sizes
    printf("Enter the size of arr: ");
    scanf("%d", &s1);
    printf("Enter the size of brr: ");
    scanf("%d", &s2);

    s3 = s1 + s2; // Calculate the size of crr

    int arr[s1];
    int brr[s2];
    int crr[s3];

    // Input for arr
    for (i = 0; i < s1; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Input for brr
    for (k = 0; k < s2; k++) {
        printf("brr[%d]: ", k);
        scanf("%d", &brr[k]);
    }

    // Copy elements from arr and brr into crr
    for (i = 0; i < s1; i++) {
        crr[i] = arr[i];
    }

    for (j = 0; j < s2; j++) {
        crr[i] = brr[j];
        i++;
    }

    // Output the elements of crr
    printf("Elements in crr: ");
    for (i = 0; i < s3; i++) {
        printf("%d ", crr[i]);
    }
    
    
    
     for(i=0;i<s3; i++)
        {
          for (k=0;k<s3-1;k++)
             {
         
                if(crr[k]<=crr[k+1])
                 {
                   j=crr[k+1];
                   crr[k+1]= crr[k];
                   crr[k]=j;}
         }       
}


}
