#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int tab[10][10], start_x, stop_x, start_y, stop_y, klucz, k=0, outcome[100][2];

    // Przygotowanie tablicy, wartosc na kazdej pozycji gdzie tab[x][x] = 21, w celu latwego sprawdzania prawidlowego dzialania kodu
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i==j){
                tab[i][j] = 21;
            } else {
                tab[i][j] = rand() % 100 + 1;
            }
        cout << tab[i][j] << "\n";
        }
    }

    // Pobieranie wartosci od uzytkownika
    cout << "Podaj liczbe ktora chcesz wyszukac: ";
    cin >> klucz;

    do{ 
        cout << "Podaj poczatkowy wierzcholek obszaru przeszukiwania\nx: ";
        cin >> start_x;
        cout << "y: ";
        cin >> start_y;

        cout << "Podaj koncowy wierzcholek obszaru przeszukiwania\nx: ";
        cin >> stop_x;
        cout << "y: ";
        cin >> stop_y; 

        if(!(start_x <= stop_x && start_y <= stop_y)){
            cout << "Podane wierzcholki nie sa poprawne\n";
        }
    }while(!(start_x <= stop_x && start_y <= stop_y));

    // Przeszukiwanie
    for(int i=start_x; i<=stop_x; i++){
        for(int j=start_y; j<=stop_y; j++){
            if(tab[i][j]==klucz){
                outcome[k][0] = i;
                outcome[k][1] = j;
                k++;
            }
        }
    }
    
    // Wyswietlanie wyniku
    for(int i = 0; i < k; i++){
        cout << i+1 << " znaleziony element rowny kluczowi to: tab[" << outcome[i][0] << "][" << outcome[i][1] << "]\n"; 
    }
}