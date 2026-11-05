#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int number;
        scanf("%d", &number);

        int nums[8];
        int digit = 1;
        int count = 0;

        while (number > 0)
        {
            int d = number % 10;
            if (d != 0)
            {
                nums[count++] = d * digit;
            }
            digit *= 10;
            number /= 10;
        }
        
        printf("%d\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", nums[i]);
        }
        printf("\n");
    }
    
    return 0;
}