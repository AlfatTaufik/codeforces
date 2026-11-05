#include <stdio.h>

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        char nums[6];
        scanf("%s", nums);
        
        
        int sum1 = 0;
        int sum2 = 0;
        for (int k = 0, l = 5; k < l; k++, l--)
        {
            sum1 += nums[k] - '0';
            sum2 += nums[l] - '0';
        }
        
        printf("%s\n", sum1 == sum2 ? "YES" : "NO");
    }
    
    return 0;
}