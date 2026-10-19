#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int teams[10005];
    for (int i = 0; i < n * (n - 1); i++)
    {
        int a;  
        scanf("%d", &a);

        teams[i] = a;
    }

    int a1[10005];
    int b1[10005];

    for (int i = 1; i <= n * (n - 1); i++)
    {
        if (i > 0 && i % 2 == 0)
        {
            a1[i] = teams[i];
        }
        else
        {
            b1[i] = teams[i];
        }      
    }
    
    int count = 0;
    for (int i = 0; i < n * (n - 1); i++)
    {
        if (a1[i] == b1[i])
        {
            count++;
        }
    }

    printf("%d\n", count);
    
    
    return 0;
}