#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int i, n = 0;
    printf("Các số chẵn trong mảng là:\n");
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            n = 1;
        }
    }
    if (!n) {
        printf("Mảng không chứa số chẵn.");
    }
    printf("\n");
    return 0;
}
