#include <stdio.h> 
#include <stdlib.h>

int count(unsigned int num){
    unsigned int c = 1;
    while(num/=10){
        c++;
    }
    return c;
}

char *convert(unsigned int num){
    int d, len = count(num), i = len;
    char *p = malloc(len+1);

    p[i] = '\0';
    i--;
    
    while(num > 0){
        int d = num % 10;
        p[i] = d + '0';
        i--;
        num /= 10;
    }
    return p;
}

int main(){
    unsigned int k = 19843;
    char *converted = convert(k);
 
    if(converted){
        printf("converted: %s", converted);
        free(converted);
    }
}