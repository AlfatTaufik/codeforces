#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int grade[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &grade[i]);
    }

    for (int i = 0; i < n; i++)
    {
            if (grade[i] >= grade[k - 1] && grade[i] > 0)
            {
                count++;
            }
            
        }
        printf("%d\n", count);
        return 0;
}