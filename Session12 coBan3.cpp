#include <stdio.h>
int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *=i;
    }
    return giaiThua;
}
int main() {
    int n;
    printf("Nhap vao so can tinh giai thua: ");
    scanf("%d",&n);
    int sum=tinhGiaiThua(n);
    printf("Giai thua can tim la: %d",sum);
}
