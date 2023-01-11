/*
Dane są dwie tablice liczb zmiennoprzecinkowych o długościach:
 (1) 3*N oraz (2) N, gdzie N jest liczbą naturalną. Zdefiniuj funkcję fun_arr,
 która w parametrze przyjmie dwie tablice (o podanej wyżej specyfikacji) oraz wskaźnik na pewną dodatkową funkcję fun_aux.
 Funkcja fun_arr z każdych trzech sąsiadujących elementów (o indeksach {3i, 3i+1, 3i+2}) z pierwszej tablicy ma obliczyć,
 za pomocą fun_aux, pojedynczą wartość i wstawić ją do drugiej tablicy w element o indeksie i. Funkcja pomocnicza fun_aux,
 dla trzech podanych liczb, ma zwracać wartość największą.
W funkcji głównej stwórz przykładowe dynamiczne tablice (1) i (2) spełniające warunki z początku zadania i wykorzystując funkcje fun_arr i fun_aux,
 uzupełnij tablicę wyjściową (2). Wypisz na ekranie jej wartości. Zadbaj o właściwe zarządzanie pamięcią dynamiczną.
Przykład:
IN:     [1.0,1.0,2.5,   2.0,1.0,-0.5,   -1.5,-3.0,-4.0,   0.0,0.0,0.0,0.0]
OUT: [2.5            2.0             -1.5              0.0]
 */

#include <iostream>

//deklaracja wskaznika na funkcje
double (*fun_auxPointer)(double aNumber,double bNumber,double cNumber);

double fun_aux(double aNumber,double bNumber,double cNumber){
    if (aNumber >= bNumber && aNumber >= cNumber){
        return aNumber;
    }
    if (bNumber >= aNumber && bNumber >= cNumber){
        return bNumber;
    }
    return cNumber;
}


void fun_arr(double* tab1, double* tab2,/*wskaznik na funkcje w parametrze*/ double (*fun_Pointer)(double aNumber,double bNumber,double cNumber), int tab2Size){
    for (int i = 0; i < tab2Size; ++i) {
        tab2[i] = fun_Pointer(tab1[3*i], tab1[3*i+1], tab1[3*i+2]);
    }
}

void printArray(double* array, int arraySize){
    for (int i = 0; i < arraySize; ++i) {
        std::cout<<array[i]<<"\t";
    }

}

int main() {
    int n = 4;
    double* tab1 = new double [3*n]{1.0,1.0,2.5,   2.0,1.0,-0.5,   -1.5,-3.0,-4.0,   0.0,0.0,0.0};
    double* tab2 = new double [n];

    //przypisanie wskaznika na funkcje
    fun_auxPointer=&fun_aux;

    fun_arr(tab1, tab2, fun_auxPointer, n);
    printArray(tab2, n);
    return 0;
}
