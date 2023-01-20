#include <iostream>

int * min(int * a, int *b){
    if (*a<=*b)
        return a;
    return b;
}

int main() {
    int *a= new int;
    int *b= new int;
    std::cin>>*a>>*b;
    std::cout<<*min(a,b);
    delete a;
    delete b;
    return 0;
}
