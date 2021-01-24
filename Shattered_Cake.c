#include <stdio.h>

int main(){
    int w, n, t = 0;
    
    scanf("%d %d", &w, &n);
    for (int i = 0; i < n; i++){
        int wi;
        int li;
        scanf("%d %d", &wi, &li);
        t += wi * li;
    }
    int i = 1;
    while (w * i != t)
        i++;
    printf("%d", i);
}