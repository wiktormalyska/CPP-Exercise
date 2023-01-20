#include <iostream>
int *func(int *a, int *b){
    if (*a>*b)
        return b;
    return a;
}

int main() {
    int*a = new int{5};
    int*b = new int{10};

    int*(*abc)(int*, int*);
    abc = func;
    std::cout<<*abc(a,b);
    return 0;
}
