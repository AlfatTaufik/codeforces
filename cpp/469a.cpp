#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int levels[n] = {0};
    int p, q, x, y;
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &x);
        if (x > 0 && x <= n)
        {        
            levels[x - 1]++;
        }
        else
        {
            printf("Input kelebihan\n");
            break;
        }
    }

    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &y);
        if (y > 0 && y <= n)
        {        
            levels[y - 1]++;
        }
        else
        {
            printf("Input kelebihan\n");
            break;
        }
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (levels[i] == 0)
        {
            flag = 0;
            break;
        }        
    }
    
    printf("%s\n", flag == 1 ? "I become the guy." : "Oh, my keyboard!");
    
    return 0;
}