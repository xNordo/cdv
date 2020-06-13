#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int tab_size, resp, choice, suma;


    cout << "Ile elementow tablicy chcesz podac?: ";
    cin >> tab_size;

    int* tab = new int[tab_size];

    for(int i = 0; i<tab_size; i++){
        cout << "Podaj wartos elementu nr " << i+1 << ": ";
        cin >> tab[i];
    }

    do{
        cout << "\n\nWybierz co chcesz wyswietlic:\n1. Wartosc pierwszego elementu tablic\n2. Zawartosc tablicy\n3. Roznice miedzy pierwszym i ostatnim elementem tablicy\n4. Sume wszystkich elementow tablicy\n5. Wybrany element\n0. Zakoncz\n>>> ";
        cin >> resp;
        switch(resp){
            case 1:
                cout << "Pierwszy element tablicy to: " << tab[0] << "\n";
                break;

            case 2: 
                for(int j=0; j<tab_size; j++){
                    cout <<"Element nr " << j+1
                    << " ma wartosc: " << tab[j] << "\n";
                }
                cout << "\n";
                break;

            case 3:
                cout << "Wynik to: " << tab[tab_size-1]-tab[0] << "\n";
                break;

            case 4:
                suma = 0;
                for(int k = 0; k<tab_size; k++){
                    suma = suma + tab[k];
                }
                cout << "Wynik to: " << suma << "\n";
                break;
            
            case 5:
                cout << "Ktory element chcesz wyswietlic?: ";
                cin >> choice;
                cout << "Element tablicy nr " << choice << " ma wartosc " << tab[choice-1] << "\n";
                break;

            default:
                if(resp!=0){
                    cout << "To nie jest poprawny wybor.\n";
                }
                
        }
        if(resp!=0){
            system("pause");
            system("CLS");
        }
    
    }while(resp != 0);

    return 0;
}