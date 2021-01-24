#include <stdio.h>
#include <string.h>

int main(){
    int r;
    int c;
    scanf("%d %d", &r, &c);
    char arr[r][c];
    fflush(stdin);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%c", &arr[i][j]);
        }
        fflush(stdin);
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    
}