#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    int total = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char shape[20];
        scanf("%19s", shape);

        if (strcmp(shape, "Tetrahedron") == 0) {
            total += 4;
        }
        else if (strcmp(shape, "Cube") == 0) {
            total += 6;
        }
        else if (strcmp(shape, "Octahedron") == 0) {
            total += 8;
        }
        else if (strcmp(shape, "Dodecahedron") == 0) {
            total += 12;
        }
        else if (strcmp(shape, "Icosahedron") == 0) {
            total += 20;
        }
    }

    printf("%d\n", total);
    return 0;
}