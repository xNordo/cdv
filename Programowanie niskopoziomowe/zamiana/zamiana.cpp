#include <stdio.h>
void zamiana( int *x, int *y) {
   int temp = *x; 
   *x = *y;
   *y = temp;
};

int main() {
	int x = 1;
	int y = 100;
	printf("X przed zamiana: %d \n", x);
	printf("Y przez zamiana: %d \n\n", y);
	zamiana(&x, &y);
	
	printf("X po zamianie: %d \n", x);
	printf("Y po zamianie: %d \n", y);
	
	return 0;
};
