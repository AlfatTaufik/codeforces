#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        char input[5];
        scanf("%s", input);
        if (strchr(input, '+') != 0)
        {
            total++;
        }
        if (strchr(input, '-') != 0){
            total--;
        }
    }
    printf("%d\n", total);
    
    return 0;
}