#include <stdio.h>
#include <stdbool.h>
bool kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return false;
    }
    int tongUocSo = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tongUocSo += i; 
        }
    }
    return tongUocSo == n; 
}
int main() {
    int so1, so2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }
    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }
    return 0;
}

