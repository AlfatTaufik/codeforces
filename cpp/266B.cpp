#include <stdio.h>
#include <string.h>


int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);

    char order[10005];
    scanf("%s", order);
    int len = strlen(order);

    int loop = 0;
    
    while (loop < t)
    {
        for (int i = 0; i < len - 1; i++)
        {
                if (order[i] == 'B' && order[i + 1] == 'G')
                {
                    char temp = order[i];
                    order[i] = order[i + 1];
                    order[i + 1] = temp;
                    i++;
                }
        }
        loop++;
    }

    printf("%s\n", order);
    
    return 0;
}