#include <stdio.h>
#include <ctype.h>

int main(void) {
    long long lower = 0;
    long long upper = 0;
    char s[100005];
    scanf("%s", s);

    for(int i = 0; i < s[i] != '\0'; i++){
        if (islower(s[i]))
        {
            lower++;
        }
        if (isupper(s[i]))
        {
            upper++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (lower == upper)
        {
            printf("%c", tolower(s[i]));
        } else if (lower > upper)
        {
            printf("%c", tolower(s[i]));
        }
        else if(upper > lower){
            printf("%c", toupper(s[i]));
        }
    }

    printf("\n");
    
    

    return 0;
}