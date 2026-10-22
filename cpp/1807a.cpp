#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if ((a + b) == c)
        {
            printf("+\n");
        } else if ((a - b) == c)
        {
            printf("-\n");
        }
    }
    
    return 0;
}