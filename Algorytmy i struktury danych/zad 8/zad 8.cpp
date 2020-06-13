#include <stdio.h>
#include <iostream>

#define size 20

using namespace std;


int main(){
    int j, klucz, choice, i, tab[size] = {11,20,31,51,41,11,20,31,51,41,11,20,31,51,41,11,20,31,51,41}, outcome[size];
    do{
        cout << "Jaka liczbe chcesz znalezc?: ";
        cin >> klucz;
        cout << "1. Znajdz pierwszy pasujacy\n2. Znajdzie wszystkie pasujace\n0. Wyjdz\nWybor: ";
        cin >> choice;

        switch(choice){
            case 1: 
                for(int i = 0; i < size; i++){
                    if(klucz == tab[i]){
                        cout << "Indeks szukanej wartosci to " << i << ".\n";
                        break;
                    }
                }
                cout << "Nie znaleziono\n";
                break;
            case 2:
                j = 0;
                for(int i = 0; i < size; i++){
                    if(klucz == tab[i]){
                        outcome[j] = i;
                        j++;
                    }
                }
                cout << "Znalezione indeksy to: ";
                for(int i = 0; i < j; i++){
                    cout << outcome[i] << ", ";
                }
                cout << "\n";
                break;

            default:
                if(choice != 0){
                    cout << "To nie jest prawidlowy wybor, sprobuj jeszcze raz";
                }
        }
        
        if(choice != 0){
            system("pause");
            system("CLS");
        }
    }while(choice != 0);
}