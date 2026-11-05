#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
     
    int minim = a > b ? a - b : b - a;
    int min = a < b ? a : b;

    printf("%d %d\n", min, minim / 2);
    return 0;
}