#include <stdio.h>
#include <string.h>

int main() {
    printf("ENTER STRING: ");
    char a[1000];
    gets(a);

    int n = strlen(a);
    int i = 0, j = n - 1; 
    int flag = 0;

    while (i < n / 2) {
        if (a[i] == a[j]&& atoi(a[i])==atoi(a[j])) {
            i++;
            j--;
        } else {
            flag = 1; 
            break;   
    }}

    if (flag == 0) {
        printf("PALINDROME\n");
    } else {
        printf("NOT PALINDROME\n");
    }

    return 0;
}
