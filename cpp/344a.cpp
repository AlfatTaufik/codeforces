#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int prev, next;
    scanf("%d", &prev);
    int count = 1;

    if (n <= 1)
    {
        printf("%d\n", 1);
        return 0;
    }
    

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &next);
        if (prev == next)
        {
            count = count;
        } else
        {
            count++;
        }
        
        // else if (n == 2 && prev != next)
        // {
        //     count = 2;
        // }
        
        prev = next;
    }

    printf("%d\n", count);
    
    return 0;
}