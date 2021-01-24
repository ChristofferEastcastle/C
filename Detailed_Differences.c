#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str1[256];
        char str2[256];
        scanf("%s %s", str1, str2);
        printf("%s\n%s\n", str1, str2);
        for (int j = 0; j < strlen(str1); j++)
        {
            if (str1[j] == str2[j]) {
                printf(".");
            }else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}