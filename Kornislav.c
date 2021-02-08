#include <stdio.h>

int main(){
    int arr[4];
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (arr[j] >= arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d\n", arr[0] * arr[2]);
}