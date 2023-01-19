#include <iostream>

int main() {
    int* a=new int{1};
    float* b=new float{2};
    char* c=new char{'a'};
    char* d = new char[7]{1,2,3,4,5,6,7};
    double* e=new double{1.5};
    printf("%p\n%p\n%p\n%p\n%p",a,b,c,d,e);
    std::cout<<std::endl<<sizeof(a)+sizeof(b)+sizeof(c)+(7*sizeof(d))+sizeof(e);
    return 0;



}
