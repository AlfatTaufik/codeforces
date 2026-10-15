#include <stdio.h>

int main(void) {
    int nums[5][5];
    int i1, j1;
    for (int l = 0; l < 5; l++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &nums[l][j]);
            if (nums[l][j] == 1)
            {
                i1 = l;
                j1 = j;
            }
        }
    }
    int a, b;
    if (i1 - 2 > 0)
    {
        a = i1 - 2;
    } else {
        a = (i1 - 2) * -1;
    }
    if (j1 - 2 > 0)
    {
        b = j1 - 2;
    } else {
        b = (j1 - 2) * -1;
    }
    int move = a + b;
    
    
    printf("%d\n", move);
    return 0;
}