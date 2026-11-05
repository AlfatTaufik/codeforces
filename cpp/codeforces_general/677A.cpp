#include <stdio.h>

int main(void) {
    int n, h;
    scanf("%d %d", &n, &h);
    int total = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);

        if (temp > h)
        {
            total += 2;
        }
        else {
            total += 1;
        }
    }

    printf("%d\n", total);
    
    return 0;
}