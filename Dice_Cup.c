#include <stdio.h>

int main(){
    int n;
    int m;
    scanf("%d %d", &n, &m);

    if (n < m){
        for (int i = n + 1; i <= m + 1; i++)
            printf("%d\n", i);
    }else{
        for (int i = m + 1; i <= n + 1; i++)
            printf("%d\n", i);
    }
    return 0;
}