#include <iostream>
int fun1(char str[]){
    int a = 0;
    for (int i = 0; str[i] != NULL; ++i) {
        a++;
    }
    return a;
}

int fun2(char str[], int i=0){
    if (str[i]==NULL)
        return i;
    fun2(str,i+=1);
}

int main() {
    char str[999]={NULL};
    std::cin>>str;
    std::cout<<fun1(str);
    std::cout<<fun2(str);
    return 0;
}
