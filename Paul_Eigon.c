#include <stdio.h>
#include <math.h>

int main(){
    double n, p, q;
    scanf("%lf %lf %lf", &n, &p, &q);

    p /= n;
    q /= n;
    
    double out = fmod((p + q), 2);
    
    if (out >= 0 && out < 1)
        printf("paul");
    else 
        printf("opponent");

    return 0;
}