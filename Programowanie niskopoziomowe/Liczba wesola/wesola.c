#include <stdio.h> 
#include<assert.h>

int sqr_sum(unsigned int n){ 
    int resp=0;
    while(n > 0){
            int d = n % 10;
            resp += d*d;
            n /= 10;
        }
    return resp;
}

int contains(int tab[], int num, int size){
    for(int i = 0; i < size; i++){
        if(tab[i] == num){
            return 1;
        }
    }
    return 0;
}

int czy_wesola(unsigned int liczba){
    unsigned int *tab = NULL, sum = liczba, i=0, size=0, resp;
    while(1){
        sum = sqr_sum(sum);

        if(sum == 1){
            resp = 1;
            break;
        }

        if(contains(tab, sum, i)){
            resp = 0;
            break;
        }

        if(i >= size){
            size += 5;
            tab = realloc(tab, size*sizeof(int));
            assert (tab != NULL);
        }
        i++;
        tab[i] = sum;
    }
    free(tab);
    return resp;
}

int main(int argc, const char *argv[]){
    unsigned int x;

    for (char** p = argv+1; *p != NULL; p++) {
        x = atol(*p);
        if(czy_wesola(x)){
            printf("Liczba jest wesola\n");
        } else {
            printf("liczba nie jest wesola\n");
        }
    }

    
    return 0;
}