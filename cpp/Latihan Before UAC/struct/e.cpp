#include <stdio.h>
#include <string.h>

typedef struct {
    char name[15];
    long long fols;
} infls;

infls inf[100005];
infls temp[100005];

void merge(infls inf[], int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    infls L[n1], R[n2];
    
    for(int i = 0; i < n1; i++) L[i] = inf[l + i];
    for(int j = 0; j < n2; j++) R[j] = inf[m + j + 1];

    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if (R[j].fols > L[i].fols || (R[j].fols == L[i].fols && strcmp(R[j].name, L[i].name) < 0))
        {
            inf[k++] = R[j++];
        } else inf[k++] = L[i++];
    }

    while (i < n1)
    {
        inf[k++] = L[i++];
    }
    while(j < n2) inf[k++] = R[j++];
}

void mergeSort(infls inf[], int l, int r){
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(inf, l, m);
        mergeSort(inf, m + 1, r);
        merge(inf, l, m, r);
    }
    
}

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        long long n, q;
        scanf("%lld %lld", &n, &q);
        for (int k = 0; k < n; k++)
        {
            scanf(" %s %lld", inf[k].name, &inf[k].fols);
        }

        mergeSort(inf, 0, n - 1);

        printf("Case #%d:\n", i + 1);
        for (int l = 0; l < q; l++)
        {
            long long lf, rg;
            int idx = 0, total = 0;;
            int max = 0;
            scanf("%lld %lld", &lf, &rg);
            for (int i = 0; i < n; i++)
            {
                if (inf[i].fols >= lf && inf[i].fols <= rg)
                {
                    temp[idx++] = inf[i];
                    total++;
                    // if(temp[idx].fols >= max){
                    //     strcmp(inf[i].name, temp[idx].name) < 0 ? i : max;
                    // }
                }
            }
            printf("%d %s\n", total, total > 0 ? temp[max].name : "-");
        }
        
    }
    
    return 0;
}