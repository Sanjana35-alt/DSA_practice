#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of all elements: %d", sum);
    return 0;
}