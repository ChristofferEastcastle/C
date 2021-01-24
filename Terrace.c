#include <stdio.h>
#include <string.h>

int main(){
    int max;
    int events;
    scanf("%d %d", &max, &events);
    int total = 0;
    int count = 0;
    for (int i = 0; i < events; i++)
    {
        char str[256];
        int people;
        scanf("%s %d", str, &people);
        if (strcmp(str, "enter") == 0) {
            if (total + people > max)
                count++;
            else
                total += people;
        }else {
            total -= people;
        } 
    }
    printf("%d", count);
    return 0;
}