#include <stdio.h>

int main(void) {
    char distinct[6] = {'w', 'j', 'm', 'z', 'b', 'r'};
    char gend[10005];
        int seen[26] = {0};
    scanf("%s", gend);

    int count = 0;
    for (int i = 0; gend[i]; i++)
    {
        int index = gend[i] - 'a';
        if (!seen[index])
        {
            seen[index] = 1;
            count++;
        }
        
    }

    if (count % 2 != 0 )
    {
        printf("IGNORE HIM!\n");
    } else {
        printf("CHAT WITH HER!\n");
    }
    
    
    return 0;
}