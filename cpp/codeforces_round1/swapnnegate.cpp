#include <stdio.h>
#include <stdlib.h>

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
    
    long long *b = (long long *)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);
        
        // Dalam 0-based indexing: 
        // indeks genap (0, 2, 4...) mewakili posisi ganjil di 1-based, jadi dikali -1
        // indeks ganjil (1, 3, 5...) mewakili posisi genap di 1-based, nilainya tetap
        if (i % 2 == 0) {
            b[i] = -a;
        } else {
            b[i] = a;
        }
    }
    
    // Urutkan array b dari terkecil ke terbesar
    qsort(b, n, sizeof(long long), compare);
    
    long long sum = 0;
    // Jumlah elemen yang akan ditempatkan di posisi ganjil (dikurangkan)
    int num_sub = (n + 1) / 2;
    
    for (int i = 0; i < n; i++) {
        if (i < num_sub) {
            // Elemen terkecil dikurangi (-b'_i)
            sum -= b[i];
        } else {
            // Elemen terbesar ditambah (+b'_i)
            sum += b[i];
        }
    }
    
    printf("%lld\n", sum);
    free(b);
}

int main() {
    int t;
    // Membaca jumlah test case
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}