#include <stdio.h>
int soHoanHao(int n) {
    int sum = 0;
    for(int i=1; i<=n/2; i++){
        if(n%i == 0){ 
            sum += i;
        }
    }
    return sum == n;
}
int main(){
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    if (soHoanHao(num1)){
        printf("%d la so hoan hao\n", num1);
    } else {
        printf("%d khong phai la so hoan hao\n", num1);
    }
    if (soHoanHao(num2)){
        printf("%d la so hoan hao\n", num2);
    } else {
        printf("%d khong phai la so hoan hao\n", num2);
    }
}
