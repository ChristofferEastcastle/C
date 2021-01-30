#include <stdio.h>

void main(){
    int p;
    scanf("%d", &p);
    for (int i = 0; i < p; i++){
        int k, n;
        scanf("%d %d", &k, &n);
        int s1 = 0;
        int counts1 = 0;
        int finals1 = 0;
        int finals2 = 0;
        int finals3 = 0;
        int s2 = 0;
        int counts2 = 0;
        int s3 = 0;
        int counts3 = 0;
        
        for (int j = 1; j <= 20000; j++){
            s1 += j;
            counts1++;
            if (counts1 == n){
                finals1 = s1;
            }
            if (j % 2 == 1){
                s2 += j;
                counts2++;
                if (counts2 == n){
                    finals2 = s2;
                }
            }
            else if (j % 2 == 0){
                s3 += j;
                counts3++;
                if (counts3 == n){
                    finals3 = s3;
                }
            }
            if (finals1 != 0 && finals2 != 0 && finals3 != 0){
                break;
            }
        }
        
        printf("%d %d %d %d\n", k, finals1, finals2, finals3);
    }
}