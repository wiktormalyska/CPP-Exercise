#include <iostream>

void fun1(int ** arr, int n){
    int row = 0,num=1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < row; ++j) {
            arr[i][j]=num;
            num++;
        }
        row++;
    }
}

void show(int ** arr, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout<<arr[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
}

int main() {
    int n = 5;
    int **arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <n; ++j) {
            arr[i][j]=0;
        }
    }

    fun1(arr, n);
    show(arr, n);

    return 0;
}
