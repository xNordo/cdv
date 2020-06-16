#include <stdio.h>
#include <string.h>

int sort(char **ptr, int size_x, int size_y){
   int resp, x;
   char temp;
   while(1){
      x = 0;

      for(int i = 0; i < size_x-1; i++){
         resp = check_dict(ptr[i], ptr[i+1]);
         if(resp == 1){
            for(int j = 0; j < size_y; j++){
               temp = ptr[i][j];
               ptr[i][j] = ptr[i+1][j];
               ptr[i+1][j] = temp;
               x++;
            }
         }
      }

      if(x == 0){
         break;
      }
   }
}

int check_dict(char *first, char *second){
   for(int j = 0; j < 4; j++){
      if(first[j] < second[j]){
         return -1;
      } else if(first[j] > second[j]){
         return 1;
      } 
   }
   return 0;
}


int main(){
   int m = 4;
   int n = 4;

   char s[4][4] = {"abc", "bca", "abc", "aac"};

   char **tab = (char **)malloc(m*sizeof(char *));
   
   for (int j = 0; j < m; j++){
      tab[j] = (char *)malloc(n*sizeof(char));
   }
   
   for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
         tab[i][j] = s[i][j];
      }
   }
      
   printf("\nBefore sorting:");
   for (int i = 0; i < m; i++) {
      printf("\n%d: %s", i, tab[i]);
   }

   sort(tab, m, n);
   

   printf("\nSorted:");
   for (int i = 0; i < m; i++) {
      printf("\n%d: %s", i, tab[i]);
   }

   for (int i = 0; i < m; i++){
      free(tab[i]);
   }
   free(tab);

   return 0;
}