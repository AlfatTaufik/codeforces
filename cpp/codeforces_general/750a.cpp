#include <stdio.h>

int main(void) {
    int n, time;
    scanf("%d %d", &n, &time);
    int minutes = (4 * 60) - time;

    // int total_min = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        // total_min = total_min + (i * 5);
        minutes -= i * 5;
        if (minutes < 0)
        {
            break;
        }
        count++;
    }

    printf("%d\n", count);
    
    return 0;
}