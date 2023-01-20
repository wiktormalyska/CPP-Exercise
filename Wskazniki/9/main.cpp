#include<iostream>
void show(int *begin,int *end,int size){
    for(int i=0;i<size;i++){
        std::cout<<*(begin+i)<<" ";
    }
}

int main(){
    int n;
    std::cin>>n;
    int *ptr = new int[n];
    for(int i=0;i<n;i++){
        std::cin>>*(ptr+i);
    }
    int *start = ptr;
    int *end = ptr+n-1;
    show(&(*start),&(*end),n);
}