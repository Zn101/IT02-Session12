#include <stdio.h>
int ucln(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b;
    printf("Nhap vao hai so nguyen a b: ");
    scanf("%d %d",&a,&b);
    int result = ucln(a, b);
    printf("UCLN la: %d",result);
}
