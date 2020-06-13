#include <stdio.h>

int silnia(int a) {
	int b = a;
	
	while(a > 1){
		a = a-1;
		b = b*a;
	}
	
	return b;
		
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
		wynik = silnia(a);
	};
	
	printf("wynik silni to: %d\n", wynik);

	return 0;
};
