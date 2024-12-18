#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
        printf("Các phần tử trong mảng là:\n");
    for (int i = 0; i < length; i++) {
        printf("Phần tử thứ %d: %d\n", i + 1, arr[i]);
    }
        printf("Độ dài của mảng là: %d\n", length);
    return 0;
}
