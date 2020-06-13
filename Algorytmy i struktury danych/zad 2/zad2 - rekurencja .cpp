#include <stdio.h>

int silnia(int a, int b) {
	a = a-1;
	
	if (a==1){
		return b;
	}
	else {
		b = b*a;
		silnia(a, b);
	}
};

int main() {
	int a, wynik, i=0;
	
	while (i==0){
		printf("Podaj silnie: ");
		scanf("%d", &a);
		
		if (a<0)
		{
			printf("silnia nie moze byc ujemna\n");
		}
		else 
		{
			i = 1;
		}
	}
	
	if(a==0){
		wynik = 1;
	}
	else{
		int b = a;
		wynik = silnia(a, b);
	};
	
	printf("wynik silni to: %d\n", wynik);

	return 0;
};
