#include <stdio.h>
#include <string.h>

int distinct(int x){
    int seen[10] = {0};
    while (x  > 0)
    {
        int d = x % 10;
        if (seen[d]) return 0;

        seen[d] = 1;
        x /= 10;
    }
    return 1;
}

int main(void) {
    int n;
    scanf("%d", &n);

    n++;
    while (!(distinct(n)))
    {
        n++;
    }
    
    printf("%d\n", n);
    
    return 0;
}