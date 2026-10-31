#include <stdio.h>

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    char p[105], q[105];
    scanf("%s", p);
    scanf("%s", q);

   
    if (n - m != 3) {
        printf("NO\n");
        return;
    }

    int count_p[26] = {0};
    int count_q[26] = {0};

    
    for (int i = 0; i < n; i++) count_p[p[i] - 'a']++;
    for (int i = 0; i < m; i++) count_q[q[i] - 'a']++;

    
    for (int i = 0; i < 26; i++) {
        char c = i + 'a';
        int diff = count_p[i] - count_q[i];
        
      
        if (c == 's' || c == 'i' || c == 'x') {
            if (diff != 1) {
                printf("NO\n");
                return;
            }
        } 
        
        else {
            if (diff != 0) {
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
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