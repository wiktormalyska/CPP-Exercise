#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int n=0;
    std::cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        arr[i]=rand()%100;
    }
    for (int i = 0; i < n; ++i) {
        std::cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}
