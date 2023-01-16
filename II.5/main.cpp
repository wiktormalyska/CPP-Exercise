/*
Napisz program, który przyjmuje od użytkownika dwie liczby całkowite n i m.
Utwórz dynamiczną tablicę dwuwymiarową liczb całkowitych nieujemnych arr2d
o rozmiarze nx2m i wypełnij ją losowymi wartościami z przedziału <0,10).
Następnie utwórz drugą dynamiczną tablicę dwuwymiarową liczb zmiennoprzecinkowych arr2d_2 o n wierszach.
Korzystając z kolejnych elementów tablicy arr2d wypełnij kolejne wiersze tablicy arr2d_2 w następujący sposób:
kolejne dwa elementy z każdego wiersza scal w liczbę zmiennoprzecinkową,
w której mniejsza z tych dwóch liczb będzie częścią całkowitą,
a większa - częścią ułamkową. Następnie wyświetl zawartość tablicy arr2d_2.
*/

#include <iostream>
#include <cstdlib>

int main() {

    int n=0,m=0;
    std::cin>>n;
    std::cin>>m;
    int** arr2d = new int *[n];
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        arr2d[i]=new int [2*m];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2*m; ++j) {
            arr2d[n][m]=rand()%10;
        }
    }

    float ** arr2d_2 = new float*[n];
    for (int i = 0; i < n; ++i) {
        int help = 0;
        arr2d_2[i]=new float[m];

        for (int j = 0; j < 2*m; j+=2) {
            int a = arr2d[i][j];
            int b = arr2d[i][j+1];
            if (a>b){
                arr2d_2[i][help]=(float)b+((float)a/10);
            } else{
                arr2d_2[i][help]=(float)a+((float)b/10);
            }
            help++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout<<arr2d_2[i][j]<<"\t";
        }
    }

    return 0;
}
