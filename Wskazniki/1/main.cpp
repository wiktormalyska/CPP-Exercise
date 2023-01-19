#include <iostream>

int main() {
    int n=5;
    int *a = new int;
    int *b= new int{999};
    printf("%i\t%p\t%p",n ,a,b);
    return 0;
}