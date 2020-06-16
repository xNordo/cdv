#include <stdio.h>

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
    int outcome, i;
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

int main(){
    char s1[] = "abcd", s2[] = "bcdefgh", s3[] = "Abcd"; 

    printf("s1 s2: %d\n", check_dict(s1, s2));
    printf("s1 s3: %d\n", check_dict(s1, s3));
    printf("s2 s3: %d\n", check_dict(s2, s3));

    return 0;
}