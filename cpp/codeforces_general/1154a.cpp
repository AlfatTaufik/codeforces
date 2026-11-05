#include <stdio.h>

int main(void) {
    int x[4];
    int mx = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &x[i]);
        if (x[i] > mx) mx = x[i];
    }

    int printed = 0;
    for (int i = 0; i < 4; i++) {
        if (x[i] == mx && printed == 0) {
            printed = 1;          // lewati satu kemunculan S
            continue;
        }
        printf("%d ", mx - x[i]);
    }
    printf("\n");
    return 0;
}