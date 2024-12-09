#include <stdio.h>
int inMang(int arr[],int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[3]={0,1,2};
    inMang(arr,3);
}
