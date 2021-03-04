#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int k;
        scanf("%d", &k);
        double p = 0;
        for (int j = 1; j <= k; j++){
            p = (p + 0.5) * 2;
        }
        printf("%d\n", (int) p);
    }
}