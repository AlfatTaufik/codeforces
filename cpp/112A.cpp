#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char a[2005];
    char b[2005];
    scanf("%s %s", a, b);
    // for (int i = 0; a[i]; i++)
    // {
    //     a[i] = tolower(a[i]);
    //     b[i] = tolower(b[i]);
    // }

    printf("%d\n", strcasecmp(a, b));
    
    return 0;
}