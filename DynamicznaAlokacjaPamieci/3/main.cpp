#include <iostream>

int main() {
    unsigned int n;
    std::cin>>n;
    float * arr = new float[n]{0};
    for (int i = 0; i < n; ++i) {
        std::cout<<arr[i]<<" ";
    }
    delete[] arr;
    float * arr2 = new float[10];
    for (int i = 0; i < 10; ++i) {
        arr2[i]=1;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout<<arr2[i]<<" ";
    }
    return 0;
}
//wtf is this code purpose lol