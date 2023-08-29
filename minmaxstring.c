#include <stdio.h>

void findMinMax(const int arr[], int size, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 5, 8, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    
    findMinMax(arr, size, &min, &max);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    return 0;
}
