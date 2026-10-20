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
    
    printf("%d\n", address[1]);
    return 0;
}