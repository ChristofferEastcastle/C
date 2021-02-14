#include <stdio.h>

void main(){
    int nums[3];
    char chars[4];
    scanf("%d %d %d%s", &nums[0], &nums[1], &nums[2], chars);
    //Sorting nums

    for (int k = 0; k < 3; k++){
        for (int i = 0; i < 2; i++){
            if (nums[i] >= nums[i + 1]){
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }
    }

    char c = 'A';
    for (int i = 0; i < 3; i++){
        printf("%d ", nums[chars[i] - c]);
    }
}