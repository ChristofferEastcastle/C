#include <stdio.h>

int main(){
    int testCases;
    scanf("%d", &testCases);
    
    for (int i = 0; i < testCases; i++){
        double num1;
        double num2;
        double num3;
        int test = scanf("%lf %lf %lf", &num1, &num2, &num3);
        
        if ((num1 + num2 == num3) || (num1 - num2 == num3) || (num2 - num1 == num3) || (num1 * num2 == num3) || (num1 / num2 == num3) || (num2 / num1 == num3))
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}