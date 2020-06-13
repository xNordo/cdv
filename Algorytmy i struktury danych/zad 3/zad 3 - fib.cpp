#include <stdio.h>

int main() {
	int a, b=1, c=0, d, i=1;
	
	while(!(a>0)){
		printf("Podaj ktora liczbe ciagu fibbonaciego chcesz otrzymac: ");
		scanf("%d", &a);
		if (a<=0) {
			printf("Musisz podac liczbe naturalna wieksza od 0\n");
		}
	}
	
	
	while(a != i) {
		i = i+1;
		d = b;
		b = b+c;
		c = d;
	}
	
	printf("Wynik to: %d", b);
	return 0;
}
