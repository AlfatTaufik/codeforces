#include <stdio.h>

int main(void) {
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int total = 0;
    int result = 0;
    for (int i = 1; i <= w; i++)
    {
        total += k * i;
    }
    
    if (n > total)
    {
        result = 0;
    }else{
        result = total - n;
    }
    


    printf("%d\n", result);
    
    return 0;
}