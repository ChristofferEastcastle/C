#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    while (1 == 1){
        if (x == 0)
            if (y == 0)
                break;
        if (x + y == 13)
            printf("Never speak again.\n");
        else if (x > y)
            printf("To the convention.\n");
        else if (y > x)
            printf("Left beehind.\n");
        else if (x == y)
            printf("Undecided.\n");
        
        scanf("%d %d", &x, &y);
    }
}