#include <stdio.h>

void addItem(int arr[],int size){
    for (int i = 0;i<size;i++){
        printf("Phan tu thu [%d] la: ",i);
        scanf("%d", &arr[i]);
    }
}

void showItem(int arr[],int size){
    for (int i = 0;i<size;i++){
        printf("[%d]",arr[i]);
    }
    printf("\n");
}

void addItemArray(int arr[],int size,int value,int position){
    for (int i = size;i>position;i--){
        arr[i] = arr[i-1];
    }
    arr[position] = value;
}

void changeItem(int arr[],int value,int position){
    arr[position] = value;
}

void deleteItem(int arr[],int size,int position){
    for (int i = position;i<size-1;i++){
        arr[i] = arr[i+1];
    }
}

void highToLow(int arr[],int size){
    for (int i = 0;i<size-1;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void lowToHigh(int arr[], int size){
    for (int i = 0;i<size-1;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int linearSearch(int arr[],int size,int value){
    for (int i = 0;i<size;i++){
        if (arr[i]==value){
            return 1;
        }
    }
    return 0;
}

int binarySearch(int arr[],int size,int value){
    int l=0, r=size-1;
    while(l<=r){
        int m= (l + r)/2;
        if(arr[m]==value){
            return 1;
        } 
        else if(arr[m] < value){
            l=m+1;
        } 
        else{
            r =m-1;
        }
    }
    return 0;
}

int main(){
    int arr[100], choice, size;
    char choice2;
    do {
        printf("\t Menu\n");
        printf("1. Nhap so phan tu can nhap va gia tri phan tu\n");
        printf("2. In ra cac gia tri phan tu\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1: 
            {
                printf("Moi nhap vao so luong phan tu: ");
                scanf("%d", &size);
                addItem(arr, size);
                break;
            }
            case 2: 
            {
                showItem(arr, size);
                break;
            }
            case 3: 
            {
                int value, position;
                printf("Vi tri muon them vao la: ");
                scanf("%d", &position);
                printf("Nhap gia tri muon them vao: ");
                scanf("%d", &value);
                size++;
                addItemArray(arr, size, value, position);
                break;
            }
            case 4: 
            {
                int value, position;
                printf("Nhap vi tri muon sua: ");
                scanf("%d", &position);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                changeItem(arr, value, position);
                break;
            }
            case 5: 
            {
                int position;
                printf("Chon vi tri muon xoa trong mang: ");
                scanf("%d", &position);
                deleteItem(arr, size, position);
                size--;
                break;
            }
            case 6: 
            {
                do {
                    printf("a) Giam dan\n");
                    printf("b) Tang dan\n");
                    printf("Lua chon cua ban: ");
                    getchar();
                    choice2=getchar();
                    if(choice2 == 'a') {
                        highToLow(arr, size);
                    } 
                    else if(choice2 == 'b'){
                        lowToHigh(arr, size);
                    }
                }
                while (choice2 != 'a' && choice2 != 'b');
                break;
            }
            case 7: 
            {
                do {
                    int value;
                    printf("a) Tim kiem tuyen tinh\n");
                    printf("b) Tim kiem nhi phan\n");
                    printf("Lua chon cua ban: ");
                    getchar();
                    choice2=getchar();
                    if (choice2 == 'a'){
                        printf("Nhap vao gia tri muon tim: ");
                        scanf("%d", &value);
                        if (linearSearch(arr, size, value)){
                            printf("Tim thay gia tri trong mang\n");
                        } 
                        else{
                            printf("Khong tim thay gia tri trong mang\n");
                        }
                    } 
                    else if (choice2 == 'b'){
                        printf("Nhap vao gia tri muon tim: ");
                        scanf("%d", &value);
                        lowToHigh(arr, size);
                        if (binarySearch(arr, size, value)) {
                            printf("Tim thay gia tri trong mang\n");
                        } 
                        else{
                            printf("Khong tim thay gia tri trong mang\n");
                        }
                    }
                } 
                while (choice2 != 'a' && choice2 != 'b');
                break;
            }
            case 8:
            break;
        }
    } 
    while (choice != 8);
}
