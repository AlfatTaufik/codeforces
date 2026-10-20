#include <stdio.h>

int main(void) {
    // int lottery[5] = {1, 5, 10, 20, 100};
    int n;
    scanf("%d", &n);

    int count = 0;
    while(n != 0)
    {
        if (n % 100 == 0)
        {
            n -= 100;
            count++;
            // break;
        }
        else if (n % 20 == 0)
        {
            n -= 20;
            count++;
            // break;
        }
        else if(n % 10 == 0)
        {
            n -= 10;
            count++;
            // break;
        }
        else if(n % 5 == 0){
            n -= 5;
            count++;
            // break;
        }
        else if(n % 1 == 0){
            n -= 1;
            count++;
            // break;
        }        
    }
    printf("%d\n", count);
    
    return 0;
}