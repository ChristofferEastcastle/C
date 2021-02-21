#include <stdio.h>
#include <string.h>

struct Person
{
    int c;
    int counter;
    char name[10];
};

void printAll(struct Person arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%s\n", arr[i].name);
    }
}


int main(){
    char adrian[] = {'A', 'B', 'C', 'A', 'B', 'C', 'A', 'B', 'C', 'A', 'B', 'C'};
    char bruno[] = {'B', 'A', 'B', 'C', 'B', 'A', 'B', 'C', 'B', 'A', 'B', 'C'};
    char goran[] = {'C', 'C', 'A', 'A', 'B', 'B', 'C', 'C', 'A', 'A', 'B', 'B'};


    int n, a = 0, b = 0, g = 0, counter = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    
    for (int i = 0; i < strlen(str); i++){
        if (counter == 12)
            counter -= 12;

        switch(str[i]){
            case 'A':
                if (adrian[counter] == 'A')
                    a++;
                if (bruno[counter] == 'A')
                    b++;
                if (goran[counter] == 'A')
                    g++;
                break;
            case 'B':
                if (adrian[counter] == 'B')
                    a++;
                if (bruno[counter] == 'B')
                    b++;
                if (goran[counter] == 'B')
                    g++;
                break;
            case 'C':
                if (adrian[counter] == 'C')
                    a++;
                if (bruno[counter] == 'C')
                    b++;
                if (goran[counter] == 'C')
                    g++;
                break;
        }
        counter++;
    }

    
    if (a == 0 && b == 0 && g == 0){
        printf("0\nAdrian\nBruno\nGoran");
        return -1;
    }
    struct Person ad;
    struct Person br;
    struct Person go;
    
    strcpy(ad.name, "Adrian");
    ad.counter = a;
    ad.c = 'a';
    strcpy(br.name, "Bruno");
    br.counter = b;
    br.c = 'b';
    strcpy(go.name, "Goran");
    go.counter = g;
    go.c = 'g';
    struct Person arr[] = {ad, br, go};
    
    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 2; k++){
            if (arr[k].counter < arr[k + 1].counter){
                // Sorterer antall
                struct Person temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[0].counter);

    int howMany;

    if (arr[0].counter == arr[1].counter){
        if (arr[1].counter == arr[2].counter){
            howMany = 3;
        }else{
            howMany = 2;
        }
        struct Person names[howMany];
        for (int i = 0; i < howMany; i++){
            names[i] = arr[i];
        }
        for (int k = 0; k < howMany; k++){
            for (int i = 0; i < howMany - 1; i++){
                // Sorterer navn
                if (names[i].c >= names[i + 1].c){
                    struct Person tmp = names[i];
                    names[i] = names[i + 1];
                    names[i + 1] = tmp;
                }
            }
        }
        printAll(names, howMany);
    }else{
        printf("%s", arr[0].name);
    }
}