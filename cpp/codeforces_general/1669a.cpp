#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int rating;
        scanf("%d", &rating);

        if (rating >= 1900) {
            printf("Division 1\n");
        } else if (rating >= 1600) {
            printf("Division 2\n");
        } else if (rating >= 1400) {
            printf("Division 3\n");
        } else {
            printf("Division 4\n");
        }
    }
    return 0;
}