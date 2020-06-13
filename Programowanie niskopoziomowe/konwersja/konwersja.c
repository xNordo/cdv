#include <stdio.h> 

int charToInt(char c){
    return c-48; 
}

unsigned int horner(char t[], unsigned int p) {
    int len = strlen(t);
    unsigned int L = charToInt(t[0]), c;
    for(int i=1; i<len; i++){
        c = charToInt(t[i]);
        L = L* p + c;
    }
    return L;
}

char intToBinary(unsigned int i){
    char t[8];
    int j=8;
    while(i>0){
        t[j] = i%2;
        i = i/2;
        j--;
    }
    return t; 
}


int main(){
    char liczba[] = "189";
    unsigned int outcome = horner(liczba, 10); 
    printf("%d", outcome);
}
