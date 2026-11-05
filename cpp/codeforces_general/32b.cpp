#include <stdio.h>
#include <string.h>

int main(void) {
    char s[205];
    if (scanf("%s", s) != 1) return 0;

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == '.') {
            printf("0");
        } else if (s[i] == '-') {
            // Cek karakter berikutnya untuk menentukan apakah '-' atau '-.'
            if (i + 1 < len && s[i + 1] == '.') {
                printf("1");
                i++; // Lewati karakter berikutnya
            } else if (i + 1 < len && s[i + 1] == '-') {
                printf("2");
                i++; // Lewati karakter berikutnya
            }
        }
    }
    printf("\n");
    return 0;
}