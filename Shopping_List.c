#include <stdio.h>
#include <string.h>

typedef struct Item
{
    char key[12];
    int value;
} Item;


int keyExists(char str[], Item arr[], int size){
    for (int i = 0; i < size; i++){
        if (strcmp(arr[i].key, str) == 0)
            return i;
    }
    return -1;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    struct Item arr[n * m];

    int arr_counter = 0;
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            char str[11];
            scanf("%s", str);
            int index = keyExists(str, arr, n * m);
            if (index != -1){
                arr[index].value++;
            }else{
                struct Item temp;
                strcpy(temp.key, str);
                temp.value = 1;
                arr[arr_counter] = temp;
                arr_counter++;
            }
        }
    }
    int counter = 0;
    struct Item everyList[n * m];
    for (int i = 0; i < arr_counter; i++){
        if (arr[i].value == n){
            everyList[counter] = arr[i];
            counter++;
        }
    }
    //Sorting arr in alphabetically order
    for(int i = 0 ; i < counter; i++){
        for (int j = 0; j < counter - 1; j++){
            if (strcmp(everyList[j].key, everyList[j + 1].key) > 0){
                Item temp;
                strcpy(temp.key, everyList[j].key);
                temp.value = everyList[j].value;
                everyList[j] = everyList[j + 1];
                everyList[j + 1] = temp;
            }
        }
    }
    printf("%d\n", counter);
    for (int i = 0; i < counter; i++){
        if (i != counter - 1)
            printf("%s\n", everyList[i].key);
        else
            printf("%s", everyList[i].key);
    }
    return 0;
}