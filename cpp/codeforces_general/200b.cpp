#include <stdio.h>

double countVolume(double *total, int n){
    return *total / n;
}

int main(void) {
    int n;
    scanf("%d", &n);
    double total = 0;
    // int percent[n];
    for (int i = 0; i < n; i++)
    {
        // scanf("%d", percent[i]);
        double temp;
        scanf("%lf", &temp);
        total += temp;
    }
    
    double count = countVolume(&total, n);
    printf("%.13lf\n", count);
    return 0;
}