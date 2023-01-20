#include <iostream>

void func(unsigned int word, unsigned char * b0, unsigned char * b1,unsigned char * b2,unsigned char * b3){
    for (int i = 0; i < 4; ++i) {
        unsigned char* ptr = (unsigned char*)&word;
        *b0 = *(ptr+0);
        *b1 = *(ptr+1);
        *b2 = *(ptr+2);
        *b3 = *(ptr+3);
    }
}

int main() {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned int a;
    std::cin>>a;
    func(a,&b0, &b1, &b2, &b3);
    std::cout<<(int)b0<<(int)b1<<(int)b2<<(int)b3;
    return 0;
}
