#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[1005];
    int grade;
    int idx;
} contestant;

contestant contest[1005];

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int n;
        scanf("%d", &n);
        for (int k = 0; k < n; k++)
        {
            scanf(" %s %d", contest[k].name, &contest[k].grade);
            contest[k].idx = k;
        }

        int idx = 0;
        char nameWin[1005];
        strcpy(nameWin, contest[idx].name);
        int max = contest[idx].grade;

        for (int i = 0; i < n; i++)
        {
            if (contest[i].grade > max)
            {
                idx = i;
                strcpy(nameWin, contest[idx].name);
                max = contest[i].grade;
                // printf("Cek");
            }
            else if (contest[i].grade == max)
            {
                contest[i].idx > idx ? idx : contest[i].idx;
                strcpy(nameWin, contest[idx].name);
                max = contest[i].grade;
                // printf("Cek2");
            }
        }
        printf("Case #%d: %s %d\n", i + 1, nameWin, max);
    }
return 0;
}