#include<stdio.h>
#include<stdlib.h>
search(int arr[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			printf("Element found at index %d\n", i);
			return;
		}
		}
	printf("Element is not present in array\n");
}
int main() {
	int n, key;
	printf("Enter the size of array: ");
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation fauiled\n");
		return 1;
	}
	printf("Enter elements of array: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Enter element to search: ");
	scanf_s("%d", &key);
	search(arr, n, key);
	free(arr);
	return 0;
}
