#include <stdio.h>
#include <string.h>

int main(){
    char arr[301];
    int c = 0;
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++){
        if (i % 3 == 0 && arr[i] != 'P')
            c++;
        else if (i % 3 == 1 && arr[i] != 'E')
            c++;
        else if (i % 3 == 2 && arr[i] != 'R')
            c++;
    }
    printf("%d", c);
    return 0;
}