#include <stdio.h>

void toUpper(char *napis){
    for(int i=0; napis[i] != 0; i++){
        if(napis[i] >= 97 && napis[i] <= 122){
            napis[i] = napis[i] - 32;
        }
    }
}

int main(){
    char napis[] = "Qwerty()!-;,";
    toUpper(napis);
    printf("Wynik: ");
    for(int i=0; napis[i] != 0; i++){
        printf("%c", napis[i]);
    }
    return 0;
}
