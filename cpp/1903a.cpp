#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[105];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        if (k >= 2) {
            printf("YES\n");
            continue;
        }

        int sorted = 1;
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i + 1]) {
                sorted = 0;
                break;
            }
        }
        printf(sorted ? "YES\n" : "NO\n");
    }
    return 0;
}