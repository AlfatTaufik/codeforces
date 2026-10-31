#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    int max_val = 0;
    int has_interior_ge_2 = 0;

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        
        sum += a;
        
        if (a > max_val) {
            max_val = a;
        }
        
    
        if (i > 0 && i < n - 1 && a >= 2) {
            has_interior_ge_2 = 1;
        }
    }

    if (max_val == 1) {
        printf("-1\n");
    } 

    else if (has_interior_ge_2) {
        printf("%lld\n", sum - 1);
    } 
    else {
        printf("%lld\n", sum - (n - 1));
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}