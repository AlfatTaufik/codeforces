#include <stdio.h>

int main(void) {
    char s[105];
    int nums[105] = {0};
    int n = 0;
    int current = 0;

    scanf("%s", s);

    for (int i = 0; ; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            current = current * 10 + (s[i] - '0');
        }
        else
        {
            nums[n++] = current;
            current = 0;
            if (s[i] == '\0')
            {
                break;
            }
        }
    }
        
        for (int i = 0; i < n; i++)
        {
            int key = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > key)
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (i > 0) printf("+");
            printf("%d", nums[i]);
        }

        printf("\n");
        
    
    return 0;
}