#include <stdio.h>

struct arr{
   float min_value;
   int min_i;
   int min_a;
   float max_value;
   int max_i;
   int max_a;
};

struct arr find_min(float *array, int size){
   struct arr std; 
   std.min_i = 0;
   std.max_i = 0;
   for (int i=0; i<size; i++){

      if(array[std.max_i] < array[i]){
         std.max_i = i;
      }
      if(array[std.min_i] > array[i]){
         std.min_i = i;
      }
   }
   std.min_a = &array[std.min_i];
   std.min_value = array[std.min_i];
   std.max_a = &array[std.max_i];
   std.max_value = array[std.max_i];
   return std;
}

main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8};
   int size = 10;
   struct arr outcome = find_min(tab, size);
   printf("min value: %f\nmin index: %d\nmin address: %p\n\n", outcome.min_value, outcome.min_i, outcome.min_a);
   printf("max value: %f\nmax index: %d\nmax address: %p\n", outcome.max_value, outcome.max_i, outcome.max_a);
}