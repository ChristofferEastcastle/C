#include <stdio.h>
#include <string.h>

typedef struct Item
{
    char key[11];
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
    scanf("%d%d", &n, &m);
    struct Item arr[20];

    int arr_counter = 0;
    for (int i = 0; i < n; i++){
        for (int k = 0; k < 5; k++){
            char str[15];
            scanf("%s", str);
            int index = keyExists(str, arr, 20);
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
    struct Item everyList[20];
    for (int i = 0; i < arr_counter; i++){
        if (arr[i].value == n){
            everyList[counter] = arr[i];
            counter++;
        }
    }
    //Sorting arr in alphabetically order
    for(int i=0;i<=counter;i++){
        for (int j=i+1;j<=counter;j++){
            if (strcmp(everyList[i].key, everyList[j].key)>0){
                char temp[11];
                strcpy(temp, everyList[i].key);
                strcpy(everyList[i].key,everyList[j].key);
                strcpy(everyList[j].key,temp);
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
}