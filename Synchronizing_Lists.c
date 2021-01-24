#include <stdio.h>

int indexOf(int arr[], int size, int num){
    for (int i = 0; i < size; i++){
        if (arr[i] == num)
            return i;
    } return -1;
}
int sort(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int k = 0; k < size - 1; k++){
            if (arr[k] > arr[k + 1]){
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while (n != 0){
        int first[n];
        int second[n];
        for (int i = 0; i < n * 2; i++){
            int input;
            scanf("%d", &input);
            if (i < n)
                first[i] = input;
            else
                second[i] = input;
        }
        for (int i = 0; i < n; i++){
            int index = indexOf(first, n, n);
        }
    }
}