#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        int g;
        scanf("%d", &g);
        int arr[g];
        int last = -1;
        for (int j = 0; j < g; j++){
            int gnomes;
            scanf("%d", &gnomes);
            arr[j] = gnomes;
        }
        for (int j = 1; j < g - 1; j++){
            if (arr[j] != arr[j - 1] + 1){
                printf("%d\n", j + 1);
                break;
            }
        }
    }
        
}