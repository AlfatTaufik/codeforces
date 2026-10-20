#include <stdio.h>

long long func(long long n, long long *total){
    // int total = 0;
    *total = n % 2 == 0 ? n/2 : -(n + 1) / 2;
    return *total;
}

int main(void) {
    long long n;
    long long total = 0;
    scanf("%lld", &n);
    printf("%lld\n", func(n, &total));
    return 0;
}