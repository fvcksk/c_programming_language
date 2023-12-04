#include <stdio.h>

int binarySearch(int x, int v[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d", binarySearch(9, arr, 5));
    return 0;
}

int binarySearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (v[mid] == n) {
        return mid;
    }
    return -1;
}