#include <stdio.h>
#include <string.h>

int main(){
    int n, p, q;
    scanf("%d %d %d", &n, &p, &q);

    int counter = 0;

    char str[10];

    for (int i = 0; i < p + q; i++){
        if (i % n == 1 && i % n < n){
            strcpy(str, "paul");
        }else{
            strcpy(str, "opponent");
        }
    }
    printf("%s", str);
}