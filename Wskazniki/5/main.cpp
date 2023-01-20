#include <iostream>

void func(int &a, int * b){
    int c = *b;
    *b=a;
    a=c;
}

int main() {
    int a = 5;
    int *b = new int{10};
    printf("%d\t%d", a, *b);
    printf("\n");
    func(a, b);
    printf("%d\t%d", a, *b);
    return 0;
}
