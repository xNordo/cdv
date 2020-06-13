#include <stdio.h>

int strLen(char *str){
    int i = 0;
    for(;str[i] != 0; i++);
    return i; 
}

int main(){
    char napis[] = "Lorem ipsum";
    
    int dlugosc = strLen(napis);
    printf("Dlugosc ciagu znakow to: %d\n", dlugosc); 
    return 0;
}