#include <stdio.h>

int main(){
    int arr[9];
    int sum = 0;

    for (int i = 0; i < 9; i++){
        int a;
        scanf("%d", &a);
        arr[i] = a;
        sum += a;
    }

    int difference = sum - 100;

    int stop = 0;
    for (int i = 0; i < 9 && stop == 0; i++){
        for (int k = 0; k < 9 && stop == 0; k++){
            if (arr[i] + arr[k] == difference && arr[i] != arr[k]){
                arr[i] = 0;
                arr[k] = 0;
                stop = -1;
            }
        }
    }
    for (int i = 0; i < 9; i++){
        if (arr[i] != 0)
            printf("%d\n", arr[i]);
    }
    return 0;
}