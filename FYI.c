#include <stdio.h>

int main(){
    char arr [8];
    scanf("%s", arr);
    int c = 0;
    for (int i = 0; i < 3; i++){
        if (arr[i] == '5')
            c++;
    }

    if (c == 3)
        printf("1");
    else
        printf("0");
    

     return 0;
}