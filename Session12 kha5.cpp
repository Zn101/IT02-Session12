#include <stdio.h>
int soNguyenTo(int n){
    if (n < 2){
        return 0; 
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0; 
        }
    }
    return 1; 
}
int main(){
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    if(soNguyenTo(num1)){
        printf("%d la so nguyen to\n", num1);
    }else {
        printf("%d khong phai la so nguyen to\n", num1);
    }
    if(soNguyenTo(num2)) {
        printf("%d la so nguyen to\n", num2);
    }else {
        printf("%d khong phai la so nguyen to\n", num2);
    }
}
