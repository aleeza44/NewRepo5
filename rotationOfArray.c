#include<stdio.h>
#include<stdlib.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
     }
}
void rotateArray(int arr[], int n, int k) {
    k = k % n;
    if (k == 0)
        return 0;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}
int main() {
    int n,k;
    printf("Enter the size of array: ");
    scanf_s("%d", &n);
    printf("Enter elememts of array: ");
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    printf("Enter the number of rotations(k): ");
    scanf_s("%d", &k);
    rotateArray(arr, n, k);
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
