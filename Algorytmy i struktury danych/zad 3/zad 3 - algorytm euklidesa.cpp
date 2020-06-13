#include <stdio.h>

int main() {
	int a, b, wynik;
	printf("Ten program obliczy NWD dla dwoch liczb calkowitych\n");
	printf("Podaj pierwsza liczbe: ");
	scanf("%d", &a);
	printf("Podaj druga liczbe: ");
	scanf("%d", &b);
	
	while(!wynik){
		if (a==b){
			wynik = a;
		}
		else{
			if(a>b){
				a=a-b;
			}
			else{
				b=b-a;
			}
		}
	}
	printf("NWD to: %d", wynik);
	return wynik;
}
