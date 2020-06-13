#include <stdio.h> 

int strLen(char *str){
    int i = 0;
    for(;str[i] != 0; i++);
    return i; 
}

void reduceInterpunction(char napis[]){
    int j = 0;
    for(int i=0; napis[i] != 0; i++){
        if(napis[i] >= 65 && napis[i] <= 122){
            napis[j] = napis[i];
            j++;
        }
    }
    napis[j] = 0;
}

void toLowercase(char napis[]){
    for(int i=0; napis[i] != 0; i++){
        if(napis[i]>=65 && napis[i]<=90){
            napis[i] = napis[i] + 32;
        }
    }
}

int isPalindrome(char napis[]){
    int len = strLen(napis), j = len-1;
    for(int i=0; i < len; i++, j--){
        if(napis[i] != napis[j]){
            return 0;
        }
    }
    return 1;
}


int main(){
    char napis[] = "Taco cat", copy[100];
    
    int j = 0;
    for(; napis[j]!=0; j++){
        copy[j] = napis[j];
    }
    copy[j] = 0;
    
    

    reduceInterpunction(copy);
    toLowercase(copy);
    int outcome = isPalindrome(copy);

    printf("Napis \"");
    for(int i=0; napis[i] != 0; i++){
        printf("%c", napis[i]);
    }

    if(outcome){
        printf("\" jest palindromem.\n");
    } else {
        printf("\" nie jest palindromem\n");
    }
    return 0; 
}