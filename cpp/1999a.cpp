#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        char nums[10];
        scanf("%s", nums);

        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum += nums[i] - '0';
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}