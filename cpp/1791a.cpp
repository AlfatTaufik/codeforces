#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s;
        scanf(" %c", &s);
        printf("%s\n", strchr("codeforces", s) != 0 ? "YES" : "NO");
    }
    
    return 0;
}