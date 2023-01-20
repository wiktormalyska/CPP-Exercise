#include <iostream>

int * func(int *arr, int size){
    int *revArr = new int[size];
    int n = size-1;
    for (int i = 0; i < size; ++i) {
        *(revArr+n)=*(arr+i);
        n--;
    }
    return revArr;
}

int main() {
    int size =0;
    std::cin>>size;
    int * arr = new int[size];
    for (int i = 0; i < size; ++i) {
        std::cin>>*(arr+i);
    }
    int * revarr = func(arr, size);
    for (int i = 0; i < size; ++i) {
        std::cout<<*(revarr+i);
    }
    return 0;
}
