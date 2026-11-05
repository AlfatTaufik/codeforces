#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    int year = 0;

    while (!(a > b))
    {
        a = (a * 3);
        b = (b * 2);
        year++;
    }

    printf("%d\n", year);
    
    

    return 0;
}