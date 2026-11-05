#include <stdio.h>

int divisibility(int a, int b, int total){
    return (b - a % b) % b; 
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int a, b;
        int total = 0;
        scanf("%d %d", &a, &b);
        total = divisibility(a, b, total);
        printf("%d\n", total);
    }
    
    return 0;
}