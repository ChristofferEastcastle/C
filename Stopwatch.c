#include <stdio.h>

int main(){
    int n, a, total = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        if (i % 2 == 0)
            total -= a;
        else
            total += a;
    }
    if (n % 2 == 1)
        printf("still running");
    else
        printf("%d", total);
    
    return 0;
}