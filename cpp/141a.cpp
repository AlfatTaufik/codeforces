#include <stdio.h>

int main(void) {
    char g[10005], h[10005], p[10005];
    scanf("%s %s %s", g, h, p);

    int freq[26] = {0};

    for (int i = 0; g[i] != '\0'; i++)
    {
        freq[g[i] - 'A']++;
    }
    for (int i = 0; h[i] != '\0'; i++)
    {
        freq[h[i] - 'A']++;
    }
    for (int i = 0; p[i] != '\0' ; i++)
    {
        freq[p[i] - 'A']--;
    }

    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    printf(flag == 1 ? "YES\n" : "NO\n");
    
    
    
    
    return 0;
}