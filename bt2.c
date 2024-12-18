#include <stdio.h>
int main() {
    int arr[5];
    int i;
        printf("Nhập 5 số nguyên:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
        printf("Mảng đã nhập là:\n");
    for (i = 0; i < 5; i++) {
        printf("Phần tử thứ %d: %d\n", i + 1, arr[i]);
    }
    return 0;
}
