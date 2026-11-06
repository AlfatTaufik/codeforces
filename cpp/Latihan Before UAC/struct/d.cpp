#include <stdio.h>
#include <string.h>

typedef struct {
    char name[1005];
    int hp;
} players ;

players player[1005];

void merge(players player[], int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    players L[n1], R[n2];
    
    for (int i = 0; i < n1; i++)
    {
        L[i] = player[i + l];
    } for(int j = 0; j < n2; j++) R[j] = player[j + 1 + m];
    
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2){
        if (R[j].hp > L[i].hp || (R[j].hp == L[i].hp && strcmp(R[j].name, L[i].name) < 0))
        {
            player[k++] = R[j++];
        } else {
            player[k++] = L[i++];
        }
    }
    
    while(i < n1) player[k++] = L[i++];
    while (j < n2)
    {
        player[k++] = R[j++];
    }
}

void mergeSort(players player[], int l, int r){
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(player, l, m);
        mergeSort(player, m + 1, r);
        merge(player, l, m, r);
    }
    
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        for (int l = 0; l < n; l++)
        {
            scanf(" %s %d", player[l].name, &player[l].hp);
        }
        for (int k = 0; k < q; k++)
        {
            char name[105];
            int condition;
            scanf(" %s %d", name, &condition);
            for (int j = 0; j < n; j++)
            {
                if (strcmp(name, player[j].name) == 0)
                {
                    player[j].hp += condition;
                    if (player[j].hp > 100)
                    {
                        player[j].hp = 100;
                    } 
                    if (player[j].hp < 0)
                    {
                        player[j].hp = 0;
                    } 
                }
            }
        }
        
        mergeSort(player, 0, n - 1);
        printf("Case #%d:\n", i + 1);
        for (int p = 0; p < n; p++)
        {
            printf("%s %d\n", player[p].name, player[p].hp);
        }
        
        
    }
    
    return 0;
}