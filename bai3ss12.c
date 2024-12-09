#include <stdio.h>
int tinhGiaiThua(int n) {
    int ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua = ketQua * i;
    }
    return ketQua;
}
int main() {
    int so;
    printf("Nhap mot so: ");
    scanf("%d", &so);
    if (so >= 0) {
        printf("Giai thua cua %d la %d\n", so, tinhGiaiThua(so));
    } else {
        printf("Khong tinh duoc giai thua cua so am.\n");
    }
    return 0;
}

