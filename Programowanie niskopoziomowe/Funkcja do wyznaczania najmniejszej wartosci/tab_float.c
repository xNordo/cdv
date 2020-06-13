#include <stdio.h>

struct min{
   float min_value;
   int min_i;
   int min_a;
};

struct min find_min(float *array, int size){
   struct min std; 
   std.min_i = 0;
   for (int i=0; i<size; i++){
      if(array[std.min_i] > array[i]){
         std.min_i = i;
      }
   }
   std.min_a = &array[std.min_i];
   std.min_value = array[std.min_i];
   return std;

}

main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8};
   int size = 10;
   struct min outcome = find_min(tab, size);
   printf("min value: %f\nmin index: %d\nmin address: %p\n", outcome.min_value, outcome.min_i, outcome.min_a);
}