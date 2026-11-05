#include <stdio.h>
#include <string.h>

typedef struct {
    char name[1005];
    long long score;
} contenders;

contenders contend[1005];

void merge(contenders contend[], int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    contenders L[n1], R[n2];
    
    for (int i = 0; i < n1; i++)
    {
        L[i] = contend[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = contend[m + 1 + i];
    }
    
    //bandingkan
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (R[j].score > L[i].score || (R[j].score == L[i].score && strcmp(R[j].name, L[i].name) < 0))
        {    
            contend[k++] = R[j++];
        }
        else
        {
            contend[k++] = L[i++];    
        }  
    }
    
    while (i < n1)
    {
        contend[k++] = L[i++];
    }
    while (j < n2)
    {
        contend[k++] = R[j++];
    }
}

void mergeSort(contenders content[], int l, int r){
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(content, l, m); //kiri
        mergeSort(content, m + 1, r); //kanan
        merge(content, l, m, r);
    }
    
}

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int n, l;
        scanf("%d %d", &n, &l);
        for (int k = 0; k < n; k++)
        {
            scanf(" %s %lld", contend[k].name, &contend[k].score);
        }

        mergeSort(contend, 0, n - 1); //sorting ascending

        printf("Case #%d:\n", i + 1);
        for (int i = 0; i < l; i++)
        {
            printf("%d %s %lld\n", i + 1, contend[i].name, contend[i].score);
        }
        
    }
    
    return 0;
}