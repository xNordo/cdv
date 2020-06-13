#include <stdio.h>

int str_len(char str[]){
    int i=0;
    for(; str[i] != 0; i++);
    return i;
}

void join(char str1[], char str2[], char container[]){
    int len1 = str_len(str1);
    int len2 = str_len(str2);

    for(int i = 0; i < len1; i++){
        container[i] = str1[i];
    }
    for(int i = 0; i <= len2; i++){
        container[i+len1] = str2[i]; 
    }
}

int main(){
    char string1[] = "Hello", string2[] = " World", joined[100];

    join(string1, string2, joined);

    printf("Joined: ");
    for(int i = 0; joined[i] != 0; i++){
        printf("%c", joined[i]);
    }
}