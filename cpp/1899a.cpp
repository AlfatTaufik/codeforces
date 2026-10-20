#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int n;
        scanf("%d", &n);
        printf(n%3!=0 ? "First\n" : "Second\n");
    }
    
    return 0;
}