#include <stdio.h>

int main(){
    int n;
    int h;
    int v;
    scanf("%d %d %d", &n, &h, &v);
    if (h <= n / 2)
        h = n - h;
    if (v <= n / 2)
        v = n - v;
    printf("%d", h * v * 4);
}