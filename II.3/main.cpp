/*
Napisz program,
 który obliczy i wyświetli długości dwuwymiarowych wektorów zapisanych w jednowymiarowej tablicy liczb zmiennoprzecinkowych.
 Tablica z wektorami wejściowymi ma być skonstruowana w ten sposób,
 że kolejne współrzędne (x, y) każdego wektora zajmują kolejne elementy tablicy,
 czyli:  [x1,y1, x2,y2, x3,y3, …, xn,yn].

Zdefiniuj funkcję arr_fun, która w parametrach przyjmie:
 (1) wskaźnik na początek tablicy wektorów,
 (2) wskaźnik na za-ostatni element tej tablicy,
 (3) wskaźnik na początek tablicy wynikowej z obliczonymi długościami oraz
 (4) wskaźnik na funkcję pomocniczą, która zwraca wartość zmiennoprzecinkową a w parametrach bierze dwie wartości zmiennoprzecinkowe.
 Zdefiniuj funkcję pomocniczą, która zwróci długość wektora przy podaniu przez parametry jego dwóch współrzędnych.
 W funkcji głównej stwórz przykładową dynamiczną tablicę wektorów,
 wyznacz za pomocą stworzonej funkcji arr_fun ich długości i wyświetl powstałą w ten sposób tablicę wynikową.
 W zadaniu nie można używać funkcji z biblioteki <algorithm>.
Przykład:
IN:     [1.0,1.0  2.0,1.0  1.0,3.0  3.0,1.0]
OUT: [1.414214 2.236068 3.162278 3.162278]
 */
#include <iostream>
#include <cmath>



float vectorLength(float a, float b){
return sqrt(pow(a, 2)+ pow(b,2));
}

void arr_fun(float* arrStart,float* arrEnd,float*resultTabStart, float(*funPointer)(float a, float b)){
        int help = 0;
        for(int i=0;arrStart+i<=arrEnd;i+=2){
            *(resultTabStart+help) = funPointer(*(arrStart+i), *(arrStart+i+1));
            help++;
        }
}

void printArray(float* array, int length){
    for (int i = 0; i < length; ++i) {
        std::cout<<array[i]<<"\t";

    }
}

int main() {
    //float length = vectorLengthPointer(1.0,1.0);
    //std::cout<<length;
    float(*funPointer)(float, float)=vectorLength;
    float* array = new float[8]{1.0,1.0,2.0,1.0,1.0,3.0,3.0,1.0};
    float* results = new float[4];
    arr_fun(array,array+7,results,funPointer);
    printArray(results,4);
    return 0;
}
