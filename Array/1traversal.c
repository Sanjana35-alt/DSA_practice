#include<stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    printf("Array elements are:\n");
    for(int i=0; i<n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}