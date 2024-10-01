#include<stdio.h>

int main() {
    int i = 1;
    int arr[] = {1, 3, 4, 1, 3, 4, 3, 6, 5, 9};
    int j, key;
    for (i = 1; i < 10; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
    for (int k = 0; k < 10; k++) {  
        printf("%d\n", arr[k]);
    }
    
    return 0;
}
