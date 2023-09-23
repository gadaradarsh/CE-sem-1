#include <stdio.h>

int main() {
    float num;
    int a, b;

    scanf("%f", &num);
    a = num;
    b = num + 1;

    if (a - num > num - b) {
        printf("%d", b);
    } else {
        printf("%d", a);
    }

    return 0;
}
