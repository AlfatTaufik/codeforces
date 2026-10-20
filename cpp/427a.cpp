#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a = 0, u = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x > 0)
        {
            a += x;
        } else if(a > 0)
        {
            a--;
        } else
        {
            u++;
        }
    }

    printf("%d\n", u);
    
    return 0;
}