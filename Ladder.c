#include <stdio.h>
#include <math.h>

int main(){
    int b;
    int B;
    scanf("%d %d", &b, &B);
    double A = 90 - B;
    A /= 57.29578;
    double a = b * tan(A);
    printf("%.f", ceil(sqrt(pow(a, 2) + pow(b, 2))));
    return 0;
}