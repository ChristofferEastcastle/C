#include <stdio.h>
#include <string.h>

int main(){
    char str[100000];
    double ws = 0;
    double lc = 0;
    double uc = 0;
    double sym = 0;

    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '_')
            ws++;
        else if (str[i] > 96 && str[i] < 123)
            lc++;
        else if (str[i] > 64 && str[i] < 91)
            uc++;
        else
            sym++;
    }
    printf("%.16f\n%.16f\n%.16f\n%.16f\n", ws / strlen(str), lc / strlen(str), uc / strlen(str), sym / strlen(str));
}