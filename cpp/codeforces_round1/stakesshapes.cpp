#include <stdio.h>

void solve() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    int total_rounds = x + y + z;
    char move;
    
    if (y >= z) {
        move = 'R';
    } else if (z >= x) {
        move = 'S';
    } else {
        move = 'P';
    }
    
    for (int i = 0; i < total_rounds; i++) {
        putchar(move);
    }
    putchar('\n');
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