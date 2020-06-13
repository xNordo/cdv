#include <stdio.h>
#include <iostream>

using namespace std;

int a, b, temp, resp, i, suma;
float wynik, x;

int main () {

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    system("CLS");

    if (a > b){
        temp = b;
        b = a;
        a = temp;
    }
    

    while (resp != 4){
        cout << "\n1. suma \n2. suma kwadratow \n3. srednia arytmetyczna \n4. wyjscie \n>>> ";
        cin >> resp;
        i = a;
        wynik = 0;

        switch (resp) {
            case 1: 
                while (i <= b){
                    wynik = wynik + i;
                    i++;
                } 
                break;

            case 2: 
                while (i <= b){
                    wynik = wynik + (i*i);
                    i++;
                }
                break;

            case 3:
                x = 0;
                suma = 0;

                while (i <= b){
                    suma = suma + i;
                    i++;
                    x++;
                }

                wynik = suma / x;
                break;
            
            case 4:
                cout << "Zamykam..."; 
                return 0;

            default:
                system("CLS");
                cout << "\nTo nie jest poprawny wybor.\n\nWybierz jeszcze raz\n";
                break;
        }
        if (resp == 1 || resp == 2 || resp == 3){
            cout << "Wynik to: " << wynik << "\n";
            system("pause");
            system("CLS");
        }
        
    }
}