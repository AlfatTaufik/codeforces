#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Fungsi komparator untuk qsort (long long)
int compare(const void *a, const void *b) {
    long long arg1 = *(const long long *)a;
    long long arg2 = *(const long long *)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

void solve() {
    int n;
    scanf("%d", &n);
    
    // Alokasi dinamis untuk mendukung panjang array hingga 2 * 10^5
    long long *a = (long long *)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    // Urutkan array untuk menemukan median serta nilai min dan max
    qsort(a, n, sizeof(long long), compare);

    long long median = a[n / 2];
    long long min_cost = 0;
    
    // Hitung total biaya minimum (jumlah selisih absolut ke median)
    for (int i = 0; i < n; i++) {
        min_cost += llabs(a[i] - median); // llabs untuk nilai absolut long long
    }

    // Hitung minimum operasi (selisih elemen terbesar dan terkecil)
    long long min_ops = a[n - 1] - a[0];

    printf("%lld %lld\n", min_cost, min_ops);
    
    free(a);
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