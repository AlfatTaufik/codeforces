#include <stdio.h>

int main(void) {
    int nums[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &nums[i]);
    }

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
                break;
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}