#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        double v, O, x, h1, h2;
        scanf("%lf %lf %lf %lf %lf", &v, &O, &x, &h1, &h2);
        
        O *= 0.017453;

        double it = 0.0;

        double X;
        
        
        while (X != x){
            X = cos(v * it);
            it += 0.01;
        }
        printf("%lf", X);
        /*
        for (int j = 0; j < 5; j++){
            int y = v * j * sin(O / 57.29578) - (0.5 * (9.81 * pow(j, 2)));
            printf("%lf\n", y);
        }
        */
    }
}