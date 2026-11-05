#include <stdio.h>

int main(void) {
    int k, r;
    scanf("%d %d", &k, &r);

    for (int i = 1; ; i++)
    {
        int last = (k * i) % 10;
        if (last == 0 || last == r)
        {
            printf("%d\n", i);
            break;
        }
    }
    
    
    return 0;
}