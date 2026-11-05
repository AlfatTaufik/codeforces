#include <stdio.h>

typedef struct {
    char name[105];
    int grade;
} students;

students student[105];

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int n;
        scanf("%d", &n);
        int total = 0;
        for (int j = 0; j < n; j++)
        {
            scanf(" %s %d", student[j].name, &student[j].grade);
            total += student[j].grade;
        }

        int average = total / n;
        int book_kutu = 0;
        for (int i = 0; i < n; i++)
        {
            if (average < student[i].grade)
            {
                book_kutu++;
            }
        }
        
        printf("Case #%d: %d\n", i + 1, book_kutu);
    }
    
    return 0;
}