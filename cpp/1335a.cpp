#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int a;
        scanf("%d", &a);
        printf("%d\n", (a - 1) / 2);    
    }
    
    return 0;
}