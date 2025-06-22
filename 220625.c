#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, sum = 0;
    int arr[1000]; 

    printf("Nhap so luong phan tu (toi da 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Tong cac phan tu trong mang la: %d\n", sum);

    return 0;
}
