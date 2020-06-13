#include <stdio.h>

void zamiana(float *x, float *y) {
   float temp = *x; 
   *x = *y;
   *y = temp;
}

void bsort(float* tablica, int size) {
   int counter = 0; 
   do{
      counter = 0;
      for(int i=0; i<size-1; i++){
         if(tablica[i]>tablica[i+1]){
            counter++;
            zamiana(&tablica[i], &tablica[i+1]);
         };
      }
   }while (counter > 0);
}


main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8};
   
   bsort(tab, 10); 
   
   for (int i = 0; i < 10; i ++)
      printf( "%f\n", tab[i]);
   
}