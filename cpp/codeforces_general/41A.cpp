#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10005];
    scanf("%s", s);
    char r[10005];
    scanf("%s", r);
    
    int len = strlen(s);
    char p[10005];
    for (int i = len - 1, j = 0; i >= 0; i--, j++)
    {
        p[j] = s[i];
    }

    if (strcmp(p, r) == 0)
    {
        printf("YES\n");
    } else
    {
        printf("NO\n");
    }
    
    return 0;
}