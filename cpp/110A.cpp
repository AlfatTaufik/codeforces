#include <stdio.h>

int main(void) {
    char nums[105];
    scanf("%s", nums);

    int count = 0;
    for (int i = 0; nums[i] != '\0'; i++)
    {
        if (nums[i] == '4' || nums[i] == '7')
        {
            count++;
        }
    }

    printf("%s\n", (count == 4 || count == 7) ? "YES" : "NO");

    return 0;
}