/*
Napisz program w języku C++,
który stworzy dynamiczną tablicę dwuwymiarową trójkątną arr o rozmiarze NxN wybranego typu liczbowego i wypełni ją dowolnymi wartościami.
 Zdefiniuj funkcję, która w parametrze przyjmie wskaźnik na wskaźnik na typ void (do tablicy trójkątnej arr),
 rozmiar N, wielkość w bajtach pojedynczego elementu sizen tablicy przekazanej w pierwszym parametrze oraz dwie współrzędne x,
 y typu całkowitego.
 Funkcja ma zwrócić wskaźnik typu void ustawiony na podany we współrzędnych x, y
 element tablicy lub nullptr jeżeli nie ma takiego elementu. Pokaż użycie tej funkcji i wykonaj dealokację tablicy arr.
Przykład:
 0  1  2  3  4
 5  6  7  8
 8  9 10
11 12
13
OUT: 7 (dla x=2, y=1)
 */

#include <iostream>

void * pointerFromXY(void**arr, int n, int elementSize, int x, int y){
    char** arrChar=(char**)arr;//konwersja array void na array char
    char*pointXY=arrChar[y];//wyciagamy element z pozycji y z arrChar
    return pointXY+(elementSize*x);//Zwracamy pointer z lokalizacji w pamieci, gdzie jest element z miejsca XY poprzez dodanie do pointera z miesca Y rozmiaru typu danych pomnożony o x
}


int main() {
    const int n =5;
    int value = 0;
    int **arr = new int *[n];
    for (int i = 0; i<n;++i){
        arr[i]=new int[n-i];
        for(int j = 0;j<n-i;++j){
            if (i==2 && j==0) value--;
            arr[i][j]=value++;}
    }
    for (int i = 0; i<n;++i){
        for(int j = 0;j<n-i;++j)
            std::cout<<arr[i][j]<<" ";
        std::cout<<std::endl;}
    int *result = (int*) pointerFromXY((void **)arr,n,sizeof(int),2,1);
    std::cout<<*result<<std::endl;
    for (int i = 0; i<n;++i)
        delete[] arr[i];
    delete[] arr;
    return 0;
}
