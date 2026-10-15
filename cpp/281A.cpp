#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char word[1005];
    scanf("%s", word);

    word[0] = toupper(word[0]);
    printf("%s\n", word);

    return 0;
}