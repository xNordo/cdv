#include <stdio.h>
#include <iostream>

using namespace std;

unsigned int LG, SG, NG, PL, resp, RP;
float podatek, netto;

int main() {
	
	cout << "Podaj liczbe przepracowanych godzin: " ;
	cin >> LG;
	cout << "Podaj stawke godzinowa: ";
	cin >> SG;
	
	if (LG > 40) {
		NG = LG - 40;
		PL = (40*SG) + (2*NG*SG);
	}
	else {
		PL = LG*SG;
	}
	
	cout << "Po przepracowanych " << LG << " godzinach, tygodniowe wynagrodzenie wynosi " << PL << "\n";
	
	cout << "Obliczyc roczne wynagrodzenie i podatek? Jesli tak wpisz 1: ";
	cin >> resp;
	
	if (resp == 1) {
		RP = PL * 52;
		
		if (RP <= 20000) {
			podatek = RP * 0.19;
			cout << "Stawka podatkowa wynosi 19%" << "\n";
		}else {
			if (RP <= 30000) {
				podatek = 20000*0.19+(RP-20000)*0,21;
				cout << "Stawka podatkowa wynosi 21%" << "\n";
			}else {
				podatek = 20000*0.19+10000*0.21+(RP-30000)*0.28;
				cout << "Stawka podatkowa wynosi 28%" << "\n";
			}
		}
		
		netto = RP - podatek;
		cout << "Roczny przychod brutto wynosi: " << RP << "\n"; 
		cout << "Wysokosc podatku wynosi: " << podatek << "\n";
		cout << "Roczny przychod netto wynosi: " << netto << "\n"; 
	} 
	
	return 0;
}
