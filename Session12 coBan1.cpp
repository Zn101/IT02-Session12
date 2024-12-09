#include <stdio.h>
int caculateSum(int a, int b) {
    int sum=a + b;
}
int main() {
    int a,b;
    printf("nhap vao hai so nguyen bat ki: ");
    scanf("%d %d",&a,&b);
    int sum=caculateSum(a,b);
    printf("Tong cua hai so bang: %d",sum);
}
