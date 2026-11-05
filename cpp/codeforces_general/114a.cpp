#include <stdio.h>

int sorting(int n, int arr[]){
    int maxIdx = 0;
    int minIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maxIdx])
        {
            maxIdx = i;
        }
        if (arr[i] <= arr[minIdx])
        {
            minIdx = i;
        }
    }
    if(maxIdx > minIdx) minIdx++;
    return maxIdx + (n - 1 - minIdx);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int total = sorting(n, arr);
    printf("%d\n", total);
    return 0;
}