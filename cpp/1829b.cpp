#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int n;
        int max = 0;
        int count = 0;
        scanf("%d", &n);
        for (int k = 0; k < n; k++)
        {
            int d;
            scanf("%d", &d);
            if (d != 0)
            {
                count = 0;
            } else
            {
                count++;
                if (count > max) max = count;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}