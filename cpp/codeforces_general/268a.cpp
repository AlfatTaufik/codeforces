#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a1[n];
    int b1[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        a1[i] = a;
        b1[i] = b;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a1[i] == b1[j])
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}