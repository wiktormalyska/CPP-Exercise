#include <iostream>

void func(int*a, int*b, int*c){
    *c=*a+*b;
}

int main() {
    int*a=new int{2};
    int*b=new int{3};
    int*c=new int;
    func(a,b,c);
    std::cout<<*c;
    return 0;
}
