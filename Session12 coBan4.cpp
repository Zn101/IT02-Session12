#include <stdio.h>
int soLonNhatMang(int arr[],int n) {
    int max=arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i]>max) {
              max=arr[i];
        }
    }
    return max;
}
int main() {
    int arr[3]={0,1,2};
    int max=soLonNhatMang(arr,3);
    printf("So lon nhat trong mang la: %d",max);
}
