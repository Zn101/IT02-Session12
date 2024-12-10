#include <stdio.h>
void addItem(int arr[100][100],int n,int f){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < f; j++){
            printf("Nhap gia tri cho phan tu [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void printItem(int arr[100][100],int n,int f){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < f; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n, f;
    int arr1[100][100];
    printf("Nhap so hang va cot cua mang: ");
    scanf("%d %d",&n,&f);
        addItem(arr1,n,f);
        printItem(arr1,n,f);
}
