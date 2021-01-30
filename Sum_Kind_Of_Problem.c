#include <stdio.h>

void main(){
    int p;
    scanf("%d", &p);
    for (int i = 0; i < p; i++){
        int k, n;
        scanf("%d %d", &k, &n);
        int s1 = 0;
        int s2 = 1;
        int s3 = 2;
        int counter = 0;
        int arr[n];
        int arr2[n];
        for (int j = 0; j <= n; j++){
            if (j >= 0) s1 += j;
            arr[j] = s2;
            arr2[j] = s3;
            s2 += 2; s3 += 2;
        }
        int sum = 0;
        int sum2 = 0;
        
        for (int k = 0; k < n; k++){
            sum += arr[k];
            sum2 += arr2[k];
        }
        s2 = sum;
        s3 = sum2;
        printf("%d %d %d %d\n", k, s1, sum, sum2);
    }
}