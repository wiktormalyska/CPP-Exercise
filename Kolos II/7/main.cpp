#include <cstring>
#include <iostream>

int group_plates(char** plates, char** results, int n){
    int m = 0;
    for (int i = 0; i < n; i++){
        char* plate = plates[i];
        char* reg = strtok(plate, " ");
        char* num = strtok(NULL, " ");
        bool grouped = false;
        for (int j = 0; j < m; j++){
            char* result = results[j];
            int res_reg_len;
            if (result[2] == ' '){
                res_reg_len = 2;
            } else {
                res_reg_len = 3;
            }
            if (strncmp(result, reg, res_reg_len) == 0){
                strcat(results[j], " ");
                strcat(results[j], num);
                grouped = true;
                break;
            }
        }
        if (!grouped){
            char* new_result = new char[1024];
            strcpy(new_result, reg);
            strcat(new_result, " ");
            strcat(new_result, num);
            results[m] = new_result;
            m++;
        }
    }
    return m;
}

int main(){
    int n;
    n = 5;
    char** plates = new char*[n]{new char[100]{"LRY 1234"}, new char[100]{"LU 87654"}, new char[100]{"WA 1234"}, new char[100]{"LRY 888"}, new char[100]{"LU 999"}};

    char** results = new char*[n];

    int m = group_plates(plates, results, n);

    for (int i = 0; i < m; i++){
        std::cout << results[i] << '\n';
    }

    return 0;
}

// 5
// LRY 1234
// LU 87654
// WA 1234
// LRY 888
// LU 999
