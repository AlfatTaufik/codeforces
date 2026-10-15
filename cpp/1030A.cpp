#include <stdio.h>

int main(void) {
    int flag = 1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp == 1)
        {
            flag = 0;
            break;
        }
    }

    printf("%s\n", flag == 0 ? "HARD" : "EASY");
    
    return 0;
}