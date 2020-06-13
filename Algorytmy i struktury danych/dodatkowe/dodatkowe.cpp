#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    int nextg, i_kart, pas1, pas2, gracz=1, wynik1, wynik2, choice, randk, karta, temp, i = 0, statystyki[10][2];
    
    system("cls");
    do{
        // przygotowanie do rozgrywki
        int talia[] = {2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,11,11,11,11};
        i_kart = 52;
        pas1 = 0;
        pas2 = 0;
        wynik1 = 0;
        wynik2 = 0;

        if(i%2==0){
            gracz = 1;
        }else{
            gracz = 2;
        }
        

        // Petla rozgrywki
        while(1){
            if(gracz==1){
                cout << "Gra gracz 1, twoj wynik to: " << wynik1 << endl;
            }else{
                cout << "Gra gracz 2, twoj wynik to: " << wynik2 << endl;
            }
            
            cout << "Co robisz?\n1. Dobieram\n2. Pasuje\n3. Przewracam stol\n>>>";
            cin >> choice;

            if(choice == 1){
                randk = rand() % i_kart;
                karta = talia[randk];
                temp = talia[i_kart-1];
                talia[i_kart-1] = talia[randk];
                talia[randk] = temp;
                i_kart--;

                // Sprawdza asa
                if(karta == 11){
                    if((gracz == 1 && wynik1 + 11 > 21) || (gracz == 2 && wynik2 + 11 > 21)){
                        karta = 1;
                    }
                }
                if(gracz==1){
                    wynik1 = wynik1 + karta;
                }else{
                    wynik2 = wynik2 + karta;
                }
                cout << "Wylosowano karte o wartosci: " << karta << endl;
                system("pause");
                system("cls");

                // Sprawdzenie warunkow wygrane/przegranej
                if(wynik1 == 21 || wynik2 == 21){
                    break;
                }
                if(wynik1 > 21 || wynik2 > 21){
                    cout << "Fura" << endl;
                    break;
                }

            }else if(choice == 2){
                if(gracz == 1){
                    pas1 = 1;
                }else if(gracz == 2){
                    pas2 = 1;
                }
                
                system("cls");

                if((pas1 == 1) && (pas2 == 1)){
                    break;
                }

            }else if(choice == 3){
                cout << "Nie umiesz przegrywac!" << endl;
                return 0;

            }else{
                cout << "To nie jest poprawny wybor, sprobuj jeszcze raz" << endl;
                continue;
            }

            // Zmiana gracza
            if(pas1 == 1){
                gracz = 2;
            } else if(pas2 == 1){
                gracz = 1;
            } else {
                if(gracz == 1){
                    gracz = 2;
                } else {
                    gracz = 1;
                }
            }
        }
        // Zapis statystyk
        statystyki[i][0] = wynik1;
        statystyki[i][1] = wynik2;
        i++;

        // Sprawdzenie kto wygral
        if(wynik1 == wynik2){
            cout << "Remis!" << endl; 
        } else if(wynik1 == 21 || wynik2 > 21 || (wynik1 > wynik2 && wynik1 <21)){
            cout << "Wygrywa gracz 1" << endl;
        } else {
            cout << "Wygrywa gracz 2" << endl;
        }

        cout << "Chcesz zagrac jeszcze raz?\n1. Tak\n2. Nie, wyswietl statyski i wyjdz\n>>>";
        cin >> nextg;

        system("cls");

        if(nextg == 1){
            continue;
        } else if(nextg == 2){
            break;
        }
    }while(nextg==1);

    for(int j = 0; j < i; j++){
        cout << "Rozgrywka " << j+1 << "\nwynik gracza 1: " << statystyki[j][0] <<"\nwynik gracza 2: " << statystyki[j][1] << endl << endl;
    }
    system("pause");
    return 0;
}