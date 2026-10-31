#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 200005
#define MOD 998244353

// Variabel Graf dan Tree
int head[MAXN], to[MAXN * 2], nxt[MAXN * 2];
int edge_cnt;
int depth[MAXN], parent[MAXN];
int q[MAXN];
int carry[MAXN];
char X_str[MAXN + 5], Y_str[MAXN + 5];
int X[MAXN], Y[MAXN];

// Array untuk mengelompokkan node berdasarkan kedalaman
int depth_head[MAXN], depth_next[MAXN];

void add_edge(int u, int v) {
    to[++edge_cnt] = v;
    nxt[edge_cnt] = head[u];
    head[u] = edge_cnt;
}

void solve() {
    int n;
    scanf("%d", &n);
    
    // Inisialisasi reset array
    edge_cnt = 0;
    for (int i = 0; i <= n; i++) {
        head[i] = 0;
        depth_head[i] = 0;
    }
    
    for (int i = 1; i < n; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        add_edge(u, v);
        add_edge(v, u);
    }
    
    scanf("%s", X_str + 1);
    scanf("%s", Y_str + 1);
    for (int i = 1; i <= n; i++) {
        X[i] = X_str[i] - '0';
        Y[i] = Y_str[i] - '0';
    }

    int q_head = 0, q_tail = 0;
    int max_d = 0;
    
    q[q_tail++] = 1;
    depth[1] = 0;
    parent[1] = 0;
    
    // BFS untuk mencari kedalaman setiap node
    while (q_head < q_tail) {
        int u = q[q_head++];
        
        // Memasukkan node ke dalam linked list berdasarkan kedalamannya
        depth_next[u] = depth_head[depth[u]];
        depth_head[depth[u]] = u;
        
        if (depth[u] > max_d) max_d = depth[u];

        for (int e = head[u]; e; e = nxt[e]) {
            int v = to[e];
            if (v != parent[u]) {
                parent[v] = u;
                depth[v] = depth[u] + 1;
                q[q_tail++] = v;
            }
        }
    }

    long long ans = 0;
    long long power = 1;
    int possible = 1;
    carry[1] = 0; // Carry awal untuk root selalu 0

    // Evaluasi dari kedalaman teratas ke terbawah
    for (int d = 0; d <= max_d; d++) {
        if (depth_head[d] == 0) break;

        // Ambil salah satu node sebagai referensi penentuan bit
        int first_node = depth_head[d];
        int req_bit = (X[first_node] ^ Y[first_node]) ^ carry[first_node];
        
        // Validasi apakah SELURUH node di kedalaman ini menuntut bit yang sama
        for (int u = depth_head[d]; u; u = depth_next[u]) {
            if (((X[u] ^ Y[u]) ^ carry[u]) != req_bit) {
                possible = 0;
                break;
            }
        }
        
        if (!possible) break;

        // Jika bit yang disepakati adalah 1, tambahkan ke total pulsa
        if (req_bit == 1) {
            ans = (ans + power) % MOD;
        }
        power = (power * 2LL) % MOD; // Geser pangkat bit ke depannya

        // Teruskan nilai carry biner ke anak-anaknya di level berikutnya
        for (int u = depth_head[d]; u; u = depth_next[u]) {
            for (int e = head[u]; e; e = nxt[e]) {
                int v = to[e];
                if (v != parent[u]) {
                    carry[v] = (carry[u] + req_bit + X[u]) / 2;
                }
            }
        }
    }

    if (possible) {
        printf("%lld\n", ans);
    } else {
        printf("-1\n");
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