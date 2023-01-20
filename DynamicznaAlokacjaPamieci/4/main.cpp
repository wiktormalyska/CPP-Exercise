#include <iostream>

float *func(float * arr,int arrSize, float min, float max, int * n_out){
    float * arr2 = new float;
    int length =0;
    for (int i = (int)min-1; i <= (int)max-1; ++i) {
        arr2[length]=arr[i];
        length++;
    }
    *n_out=length;
    return arr2;
}

int main() {
    int arrSize=9;
    float min=3,max=6;
    //std::cin>>arrSize>>min>>max;
    int * newArrSize = new int;
    float * arr = new float [arrSize]{1,2,3,4,5,6,7,8,9};
    float *minmax= func(arr, arrSize, min, max, newArrSize);
    delete[] arr;

    for (int i = 0; i < *newArrSize-1; ++i) {
        std::cout<<minmax[i]<<" ";
    }

    delete[] minmax;
    delete newArrSize;

    return 0;
}
