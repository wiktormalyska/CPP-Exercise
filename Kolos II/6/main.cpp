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
“MystiqueHero;1365;6890;15210",
“Frizz;5400;6200;11000",
“Ziemniak;9965;11000;73000",
“Evel00na;10;10;90"
]
OUT:
[
“MystiqueHero 23465", //(bo 1365 + 6890 + 15210 = 23465)
“Frizz 22600",
“Ziemniak 93965",
“Evel00na 110",
]
 */
#include <iostream>
#include <cstring>
#include <stdio.h>

void func(char** playerInfo, char** playerScore){
    for (int i = 0; i < 4; ++i) {
        char* playerName = strtok(playerInfo[i],";");
        char*  score1 = strtok(NULL,";");
        char*  score2 = strtok(NULL,";");
        char* score3 = strtok(NULL,";");

        int score1I = std::atoi(score1);
        int score2I = std::atoi(score2);
        int score3I = std::atoi(score3);

        int finalScore = score1I+score2I+score3I;

        char *str = new char[100];
        sprintf(str,"%s \t %d",playerName,finalScore);
        playerScore[i]=str;
    }
}

int main() {
    char ** players = new char*[4];
    for (int i = 0; i < 4; i++){
        char* data = new char[100];
        scanf("%s", data);
        players[i] = data;
    }

    char ** playersScore = new char*[4];

    func(players,playersScore);

    for (int i = 0; i < 4; ++i) {
        std::cout<<playersScore[i]<<"\n";
    }
    return 0;
}
