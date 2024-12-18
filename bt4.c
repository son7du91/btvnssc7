#include <stdio.h> 
int main() {
    int n, i;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Số phần tử phải lớn hơn 0\n");
        return 0;
    }
    int arr[n];
    printf("Nhập %d phần tử cho mảng:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Các phần tử trong mảng là:\n");
    for (i = 0; i < n; i++) {
        printf("Phần tử thứ %d: %d\n", i + 1, arr[i]);
    }
    return 0;
}
