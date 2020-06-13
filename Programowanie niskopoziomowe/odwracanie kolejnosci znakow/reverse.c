#include <stdio.h>

int str_len(char str[]){
    int i=0;
    for(; str[i] != 0; i++);
    return i;
}

void reverse(char str[]){
    int len;
    char* temp;

    len = str_len(str);
    temp = (char*) malloc(len*sizeof(char));
    for(int i = 0, j = len-1; i <= len; i++, j--){
        temp[i] = str[j];
    }

    for(int i = 0; temp[i] != 0; i++){
        str[i] = temp[i];
    }
    free(temp);
}

int main(){
    char word[] = "dlroW olleH";

    printf("Before reverse: ");
    for(int i = 0; word[i] != 0; i++){
        printf("%c",word[i]);
    }

    printf("\n");

    reverse(word);
    printf("Reversed string: ");
    for(int i = 0; word[i] != 0; i++){
        printf("%c",word[i]);
    }

    return 0;
}