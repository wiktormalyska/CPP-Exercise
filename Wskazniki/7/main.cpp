#include <iostream>

int main() {
    float a = 1.7f;
     unsigned int *ptr = (unsigned int*)&a;
     std::cout<<*ptr;
    return 0;
}
