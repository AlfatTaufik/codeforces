#include <stdio.h>
#define MAXN 200005

int memori[MAXN];
int status_cetak[MAXN];
int daftar_tidak[MAXN];
char perintah[MAXN];

int main(void) {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int total_doc;
        scanf("%d", &total_doc);

        int total_didalam = 0;
        int total_tidak_tercetak = 0;

        for (int i = 1; i <= total_doc ; i++)
        {
            status_cetak[i] = 0;
        }

        for (int i = 1; i <= total_doc ; i++)
        {
            char tipe = perintah[i - 1];
            if (tipe == '1')
            {
                memori[total_didalam++] = i;
            }
            else if (tipe == '2')
            {
                if (total_didalam > 0)
                {
                    total_didalam--;
                    int top = memori[total_didalam];
                    status_cetak[top] = 1;
                } else
                {
                    status_cetak[i] = 1;
                }
            }
            else if (tipe == '3')
            {
                status_cetak[i] = 1;
            }
        }
        
        for (int i = 1; i <= total_doc ; i++)
        {
            if (status_cetak[i] == 0)
            {
                daftar_tidak[total_tidak_tercetak++] = i;
            }
        }

        printf("%d\n", total_tidak_tercetak);
        for (int i = 0; i < total_tidak_tercetak; i++)
        {
            printf("%d%c", daftar_tidak[i], (i == total_tidak_tercetak - 1) ? '\n' : ' ');

        }
        
        if (total_tidak_tercetak == 0)
        {
            printf("\n");
        }
        
        

    }
    
    return 0;
}