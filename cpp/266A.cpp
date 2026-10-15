#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char colors[10005];
    scanf("%s", colors);

    int throws = 0;

    for (int i = 0; i < n - 1; i++)
    {
             if (colors[i] == colors[i + 1])
             {
                throws++;
             }   
    }

    printf("%d\n", throws);
    
    
    return 0;
}