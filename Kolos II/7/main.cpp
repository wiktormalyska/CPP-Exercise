#include <iostream>

int silnia(int* n){
    n = n+2;
    return *n;
}

int main() {
    int n = 10;

    int *nPointer = &n;

    int m = silnia(nPointer);

    return 0;
}
