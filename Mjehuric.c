#include <stdio.h>

int equalArray(int arr1[], int arr2[], int size){
    for (int i = 0; i < size; i++){
        if (arr1[i] != arr2[i])
            return -1;
    }
    return 0;
}

int main(){
    int arr[5];
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    int sequence[] = {1, 2, 3, 4, 5};

    while (equalArray(sequence, arr, 5) != 0){
        for (int k = 0; k < 5; k++){
            for (int i = 0; i < 4; i++){
                if (arr[i] >= arr[i + 1]){
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    for (int j = 0; j < 5; j++){
                        printf("%d ", arr[j]);  
                    }
                    printf("\n");
                }
            }
        }
        
        
    }
    return 0;
}