#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
    int m, n, choice, sum, x, y;

    cout << "Podaj wymiary tablicy(m,n)\n";
    cout << "m: ";
    cin >> m;
    cout << "n: ";
    cin >> n;

    int tab[m][n];

    // uzupelnia tablice
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "Podaj wartosc elementu tab[" << i << "][" << j << "]: ";
            cin >> tab[i][j];
        }
    }

    do{
        cout << "Wybierz co wyswietlic:\n1.zawartosc tablicy\n2. sume wszystkich elementow\n3. wybrany element\n0. zakoncz\nwybor: ";
        cin >> choice;

        switch(choice){
            case 1: 
                for(int i = 0; i < m; i++){
                    cout << "\n";
                    for(int j=0; j<n; j++){
                        cout << tab[i][j] << " ";
                    }
                }
                cout << "\n";
                break;
            case 2:
                sum = 0;
                for(int k = 0; k < m; k++){
                    for(int l = 0; l < n; l++){
                        sum = sum + tab[k][l];
                    }
                }
                cout << "\nSuma to: " << sum << "\n";
                break;
            case 3: 
                cout << "Ktory element chcesz wyswietlic?\n";
                cout << "x: ";
                cin >> x;
                cout << "y: ";
                cin >> y;
                cout << "Wartosc tego elementu wynosi: " << tab[x][y] <<"\n";
                break;
            default:
                if(choice != 0){
                    cout <<  "To nie jest poprawny wybor, sprobuj jeszcze raz.";
                }
        }
        if(choice != 0){
            system("pause");
            system("CLS");
        }
        
    }while(choice != 0);
}    
