#include <stdio.h>

int main(void)
{
    int tc;
    scanf("%d", &tc);

    for (int t = 0; t < tc; t++)
    {
        int nums[4];

        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &nums[i]);
        }

        int count = 0;
        int max = nums[0];
        for (int i = 1; i < 4; i++)
        {
            if (nums[i] > max)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}