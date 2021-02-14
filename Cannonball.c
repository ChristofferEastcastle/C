#include <stdio.h>
#define M_PI   3.14159265358979323846264338327950288
#include <math.h>
#define degToRad(angleInDegrees) ((angleInDegrees) * M_PI / 180.0)
#define radToDeg(angleInRadians) ((angleInRadians) * 180.0 / M_PI)

void main(){
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        double v, O, x, h1, h2;
        scanf("%lf %lf %lf %lf %lf", &v, &O, &x, &h1, &h2);
        
        double t = x / v / (cos(degToRad(O)));
        double y = v * t * sin(degToRad(O)) - (0.5 * 9.81 * pow(t, 2));

        if (y >= h1 + 1 && y <= h2 -1){
            printf("Safe\n");
        }else{
            printf("Not Safe\n");
        }
    }
}