#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);


    int step = 0;

    int i = 0;
    while (i != n)
    {
        for (int j = 0; j < 5; j++)
        {
            i++;
            if (i == n)
            {
                break;
            }
            
        }
        step++;
    }
    

    printf("%d\n", step);
    
    return 0;
}