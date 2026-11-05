#include <stdio.h>
#include <ctype.h>

int main(void) {
    int n;
    scanf("%d", &n);
    char word[n];
    scanf("%s", word);

    int flag = 1;
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[tolower(word[i]) - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    
    printf("%s\n", flag == 1 ? "YES" : "NO");
    
    return 0;
}