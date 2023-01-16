/*
Ranking gry NewCSShooter przechowywany jest  na serwerze w następujący sposób:
MystiqueHero;1365;6890;15210
Frizz;5400;6200;11000
Każdy wiersz reprezentuje statystyki rozegranych meczy dla danego użytkownika.
 Pojedynczy wiersz zawiera następujące informacje oddzielone od siebie średnikiem:
 nazwa użytkownika, ilość wygranych meczy, ilość rozegranych meczy, ilość dokonanych likwidacji.
Przykład
    MystiqueHero;1365;6890;15210,
można zinterpretować, że gracz MystiqueHero wygrał 1365 meczy na 6890 wszystkich rozegranych meczy i dokonał 15210 likwidacji.
Zbuduj ranking graczy obliczając ich wynik rankingowy. Napisz funkcję, która przyjmuje dynamiczną tablicę napisów (c-string),
 w której w każdym elemencie przechowywany jest zapis statystyki danego gracza oraz drugą taką tablicę  wyjściową na wyniki.
 Funkcja powinna w drugą tablicę wyjściową wpisać informacje o graczu oraz jego wynik liczony w następujący sposób: wygrane mecze
 + wszystkie mecze + ilość likwidacji.
 Możesz założyć że nazwa użytkownika to nie więcej niż 12 znaków oraz całkowity wynik to liczba całkowita złożona z maksymalnie 10 cyfr.
 Napisz program testujący zaimplementowaną funkcję.
IN:
[
“MystiqueHero;1365;6890;15210”,
“Frizz;5400;6200;11000”,
“Ziemniak;9965;11000;73000”,
“Evel00na;10;10;90”
]
OUT:
[
“MystiqueHero 23465”, //(bo 1365 + 6890 + 15210 = 23465)
“Frizz 22600”,
“Ziemniak 93965”,
“Evel00na 110”,
]
 */
#include <iostream>
#include <cstring>

void func(char* playerInfo, char* playerScore){
    char separator = ';';
    for (int i = 0; i < 4; ++i) {
        char* playerName [2]= playerInfo[i].substr(0,playerInfo[i].find(separator));
        char*  score1 = playerInfo[i].substr(1,playerInfo[i].find(separator));
        char*  score2 = playerInfo[i].substr(2,playerInfo[i].find(separator));
        char* score3 = playerInfo[i].substr(3,playerInfo[i].find(separator));
        int score1I = std::stoi(score1);
        int score2I = std::stoi(score2);
        int score3I = std::stoi(score3);
        int finalScore = score1I+score2I+score3I;
        char str [50];

        sprintf(str,"%s \t %i",playerName,finalScore);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
