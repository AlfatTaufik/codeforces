#include <stdio.h>

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);

    char maps[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            maps[i][j] = '.';
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0)
            {
                maps[i][j] = '#';
            }

            else {
                if ((i + 1) % 4 == 0)
                {
                    maps[i][0] = '#';
                }
                else{
                    maps[i][c-1] = '#';
                }
            }
            
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c", maps[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}