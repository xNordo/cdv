#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int tab[20], count=0, temp;

    // Przygotowanie tablicy
    cout << "Tablica przed sortowaniem: ";
    for(int i = 0; i < 20; i++){
        tab[i] = rand() % 100 + 1;
        cout << tab[i] << " ";
    }
    cout << endl;

    // Bubble sort
    do{
        count = 0;
        for(int k = 0; k < 20; k++){
            if(tab[k] > tab[k+1]){
                temp = tab[k];
                tab[k] = tab[k+1];
                tab[k+1] = temp;
                count++;
                
            }   
                
        }
    }while(count != 0);

    // Wyswietlenie tablicy

    cout << "Tablica po sortowaniu: ";
    for(int i = 0; i < 20; i++){
        cout << tab[i] << " ";
    }
    cout << endl; 

    return 0; 
}