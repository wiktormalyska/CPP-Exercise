#include <iostream>

int * func(int*a, int*b){
    int *c = new int{*a+*b};
    return c;
}

int main() {
    int*a=new int{2};
    int*b=new int{3};
    int*c=func(a,b);
    std::cout<<*c;
    return 0;
}
