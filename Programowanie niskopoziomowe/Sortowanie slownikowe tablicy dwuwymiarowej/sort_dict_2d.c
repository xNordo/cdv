#include <stdio.h>
#include <stdlib.h>

void to_lowercase(char napis[]){
    for(int i=0; napis[i] != 0; i++){
        if(napis[i]>=65 && napis[i]<=90){
            napis[i] = napis[i] + 32;
        }
    }
}

int str_len(char *str){
    int i=0;
    for(; str[i] != 0; i++);
    return i;
}

int get_shorter(char *first, char *second){
    int i=0;
    if(str_len(first) > str_len(second)){
        i = str_len(second);
    } else {
        i = str_len(first);
    }
    return i;
}

int check_dict(char *first, char *second){
    int i;
    to_lowercase(first);
    to_lowercase(second);

    i = get_shorter(first, second);

    for(int j = 0; j < i; j++){
        if(first[j] < second[j]){
            return -1;
        } else if(first[j] > second[j]){
            return 1;
        }
    }

    if(str_len(first) == str_len(second)){
        return 0;
    } 
    if(str_len(first) > str_len(second)){
        return 1;
    } else {
        return -1;
    }
}

void sort(char dict[4][4], int size_x, int size_y){
    int i, outcome; 
    char temp;

    while(1){
        i = 0;
        for(int j = 0; j < size_x-1; j++){
            outcome = check_dict(dict[j], dict[j+1]);
            if(outcome == 1){
                for(int k = 0; k < size_y; k++){
                    temp = dict[j][k];
                    dict[j][k] = dict[j+1][k];
                    dict[j+1][k] = temp;
                }
                i++;
            }
        }
        if(i == 0){
            break;
        }
    }
}



int main(){
    char tab[4][4] = {"abc", "bca", "abc", "aac"};
    sort(tab, 4, 4);

    for(int i = 0; i < 4; i++){
        printf("%s\n", tab[i]);
    }
    return 0;
}