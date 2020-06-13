#include <stdio.h>

main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8}, *p = tab, min = *tab;
   int size=10, i=0, min_i, min_address;

   for ( *p ; p < tab + size ; p++) {
      i++;
      if ( *p < min ){
         min = *p;
         min_i = i;
         min_address = p;
      };
}
   printf("min: %f\n", min);
   printf("indeks min: %d\n", min_i);
   printf("adres min: %p\n", min_address);
}