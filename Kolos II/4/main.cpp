/*
Napisz program, który przyjmie od użytkownika liczbę całkowitą n.
Utwórz dynamiczną tablicę liczb całkowitych
arr i wypełnij ją wartościami od użytkownika większymi od 0.
Liczby te reprezentują liczbę elementów dla kolejnych wierszy nieregularnej
tablicy dwuwymiarowej arr2d. Następnie utwórz dynamiczną n-elementową tablicę
wskaźników na tablice liczb zmiennoprzecinkowych arr2d.
Każdemu wskaźnikowi zarezerwuj pamięć zgodnie z korespondującą indeksowo
wartością tablicy arr. Wypełnij wszystkie tablice liczbami
zmiennoprzecinkowymi pobranymi od użytkownika. 
Utwórz dynamiczną n-elementową tablicę liczb zmiennoprzecinkowych result,
której elementami są sumy elementów poszczególnych wierszy tablicy arr2d,
a następnie wyświetl jej zawartość.
 */
#include <iostream>

int main() {
    int n=0;
    std::cin>>n;
    int* arr = (int*) malloc(n);
    unsigned int numberFromUser=0;
    for (int i = 0; i < n; ++i) {
        std::cin>>numberFromUser;
        arr[i]=(int)numberFromUser;
    }
    //fill arr2d with user values
    float** arr2d = new float*[n];
    for (int i = 0; i < n; ++i) {
        arr2d[i] = new float[arr[i]]{0};
        for (int j = 0; j < arr[i]; ++j) {
            std::cin>>arr2d[i][j];
        }
    }
    //sum colums of arr2d to result
    float* result = (float*) malloc(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < arr[i]; ++j) {
            result[i]+=arr2d[i][j];
        }
        std::cout<<result[i]<<"\t";
    }
    return 0;
}
