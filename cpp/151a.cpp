#include <stdio.h>

int main(void) {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, 
        &d, &p, &nl, &np);

    int ml = k * l;
    int div = ml / nl;
    int limes = c * d;
    int salt = p / np;
    
    int min = 0;
    if (salt <= div && salt <= limes)
    {
        min = salt;
    } else if (div <= salt && div <= limes)
    {
        min = div;
    } else {
        min = limes;
    }
    
    printf("%d\n", min / n);
    return 0;
}