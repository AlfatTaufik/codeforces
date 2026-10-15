#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int total = 0;
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        int n, t;
        scanf("%d %d", &n, &t);
        total -= n;
        total += t;
        if (total >= mx)
        {
            mx = total;
        }
    }

    printf("%d\n", mx);
    
    return 0;
}