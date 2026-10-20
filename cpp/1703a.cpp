#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        /* code */
    
    
    char s[5];
    scanf("%s",s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'y')
        {
            s[0] = s[i];
        } else if (s[i] == 'e')
        {
            s[1] = s[i];
        } else if (s[i] == 's')
        {
            s[2] = s[i];
        }
    }

    if (strcmp(s, "yes") == 0)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
}
    

    
    return 0;
}