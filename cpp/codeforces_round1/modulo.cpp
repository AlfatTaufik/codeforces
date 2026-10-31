#include <stdio.h>

#define MOD 998244353

int dp1[2][4005];
int dp2[2][4005];
int pref1[4005];
int pref2[4005];

void solve() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return;

    int max_val = m + 2;

    for (int v = 0; v <= max_val + 2; v++) {
        dp1[0][v] = 0;
        dp2[0][v] = 0;
    }

    // Inisialisasi kemungkinan nilai awal a_1
    if (m + 1 <= max_val) dp1[0][m + 1] = 1;
    if (m + 2 <= max_val) dp2[0][m + 2] = 1;

    long long sum_dp2_2 = dp2[0][2];
    int curr = 0;
    int next = 1;

    for (int i = 2; i <= n; i++) {
        pref1[max_val + 1] = 0;
        pref2[max_val + 1] = 0;
        
        // Membangun Suffix Sum array agar pencarian range O(1)
        for (int v = max_val; v >= 1; v--) {
            pref1[v] = (pref1[v + 1] + dp1[curr][v]) % MOD;
            pref2[v] = (pref2[v + 1] + dp2[curr][v]) % MOD;
        }

        for (int v = 1; v <= max_val; v++) {
            int right = 2 * v;
            if (right > max_val + 1) right = max_val + 1;

            // Kalkulasi jumlah jangkauan valid dari u = v hingga u = 2v-1
            long long val1 = pref1[v] - pref1[right];
            if (val1 < 0) val1 += MOD;
            dp1[next][v] = val1;

            long long val2 = pref2[v] - pref2[right];
            if (val2 < 0) val2 += MOD;
            dp2[next][v] = val2;
        }

        // Jika i belum mencapai akhir, tambahkan ke akumulator subkasus 2b
        if (i < n) {
            sum_dp2_2 = (sum_dp2_2 + dp2[next][2]) % MOD;
        }

        curr ^= 1;
        next ^= 1;
    }

    // Jawaban adalah total valid array dari Kasus 1 + Subkasus 2a + Subkasus 2b
    long long ans = (dp1[curr][1] + dp2[curr][2] + sum_dp2_2) % MOD;
    printf("%lld\n", ans);
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