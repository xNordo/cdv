#include <stdio.h>

main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8}, min;
   int size=10, min_i;

   for (int i = 0; i<10; i++){
      if (i == 0){
         min = tab[i];
      }else {
         if (min > tab[i]){
            min_i = i;
            min = tab[i];         
         }
      }
   }
   printf("min: %f\n", min);
   printf("indeks min: %d\n", min_i);
   printf("adres min: %p\n\n\n", &tab[min_i]);
   
}