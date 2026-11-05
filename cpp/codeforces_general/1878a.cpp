#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int found = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x == k) found = 1;
        }

        printf(found ? "YES\n" : "NO\n");
    }
    return 0;
}