#include <stdio.h>

int main(){
    char cards[] = {'A', 'K', 'Q', 'J', 'T', '9', '8', '7'};
    int dominant[] = {11, 4, 3, 20, 10, 14, 0, 0};
    int not_dominant[] = {11, 4, 3, 2, 10, 0, 0, 0};
    int n;
    char dom_suit;
    int total = 0;
    scanf("%d %c", &n, &dom_suit);
    fflush(stdin);
    for (int i = 0; i < n * 4; i++){
        char arr[4];
        scanf("%s", arr);
        char card = arr[0], suit = arr[1];        
        for (int j = 0; j < 8; j++) {
            if (cards[j] == card && dom_suit == suit)
                total += dominant[j];
            else if (cards[j] == card && dom_suit != suit)
                total += not_dominant[j];
        }
    }
    printf("%d\n", total);
}