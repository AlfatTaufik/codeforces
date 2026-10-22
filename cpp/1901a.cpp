#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n, x;
        scanf("%d %d", &n, &x);

        int prev = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            scanf("%d", &a);
            if (a - prev > ans) ans = a - prev;
            prev = a;
        }

        if (2 * (x - prev) > ans) ans = 2 * (x - prev);

        printf("%d\n", ans);
    }

    return 0;
}