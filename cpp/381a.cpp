#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int cards[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cards[i]);
    }
    
    int l = 0;
    int r = n - 1;

    int s = 0;
    int j = 0;
    for (int i = 0; l <= r; i++)
    {
        int pick;
        if (cards[l] > cards[r])
        {
            pick = cards[l++];
        } else {
            pick = cards[r--];
        }
        
        if (i % 2 == 0)
        {
            s += pick;
        } else {
            j += pick;
        }
    }

    printf("%d %d\n", s, j);
    
    return 0;
}