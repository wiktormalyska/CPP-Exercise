#include <iostream>
void func(int * const a, const int* b){
    int *const c=*b;

}

int main() {
    int * a = new int{2};
    const int * b = new int{0};
    func(a,b);
    std::cout<<*b;
    return 0;
}
//idk how to do it, override const by const lol