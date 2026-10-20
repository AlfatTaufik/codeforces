#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char letters[10005];
    int freq[26] = {0}; 


    if (scanf("%[^\n]", letters) != 1) {
        printf("0\n");
        return 0;
    }

    int len = strlen(letters);

    for (int i = 0; i < len; i++) {
        // Pastikan argumen ctype di-cast ke unsigned char untuk keamanan
        if (isalpha((unsigned char)letters[i])) {
            char lower_c = tolower((unsigned char)letters[i]); // 3. Ubah ke huruf kecil dulu
            int idx = lower_c - 'a';
            
            if (freq[idx] == 0) {
                freq[idx] = 1;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}