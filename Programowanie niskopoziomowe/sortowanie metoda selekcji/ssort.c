#include <stdio.h>

float* minp(float* tablica, int size) {
   float* min_p = tablica;
   for (int i=0; i < size; i++){
      if(*min_p > tablica[i]){
         min_p = &tablica[i];
      }
   }
   return min_p;
}

void zamiana(float *x, float *y) {
   float temp = *x; 
   *x = *y;
   *y = temp;
}

void ssort(float* tablica, int size) {
   float* p;

   for (int i=0; i<size; i++){
      p = minp(&tablica[i], size-i);
      zamiana(&tablica[i], p);
   }
}


main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8};
   float* p; 

   ssort(tab, 10);

   for (int i = 0; i < 10; i ++)
   printf( "%f\n", tab[i]);
   
}