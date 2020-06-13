#include <stdio.h> 

int join(char *s1, char *s2){
    int len1 = strlen(s1), len2 = strlen(s2);
    char *joined = malloc(len1+len2);

    if(!joined){
        return NULL;
    }

    for(int i = 0; i < len1; i++){
        joined[i] = s1[i];
    }

    for(int i=0; i <= len2; i++){
        joined[i+len1] = s2[i];
    }

    return joined;
}

int main(){
    char s1[] = "Hello ", s2[] = "world";
    char *p;

    p = join(s1, s2);
    if(p){
        printf("Joined: %s", p); 
        free(p);
    }
}