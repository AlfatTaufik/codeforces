#include <stdio.h>

int main(void) {
    int address[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &address[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (address[i] > address[k])
            {
                int temp = address[k];
                address[k] = address[i];
                address[i] = temp;
            }
        }
    }
    int total = address[2] - address[0];
    if (total > 0)
    {
        total = total;
    } else
    {
        total = -total;
    }
    
    
    
    printf("%d\n", total);
    return 0;
}