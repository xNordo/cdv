#include <stdio.h>

main(){
   int i1 = 1, i2 = -1;
   unsigned int ui1 = 1, ui2 = -1;
   long l1 = 2, l2 = -2;
   unsigned long ul1 = 2, ul2 = -2;
   short s1 = 3, s2 = -3;
   unsigned short us1 = 3, us2 = -3;
   float f1 = 2.5;
   double d1 = 2.5;
   char c = 'A';
   
   char* ptr;
   int i;
   
   ptr = (char*)&i1;
   for(i=0; i<sizeof(i1); i++)
      printf("%x ", ptr[i]);
   printf("\n");
   
   ptr = (char*)&i2;
   for(i=0; i<sizeof(i2); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&ui1;
   for(i=0; i<sizeof(ui1); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&ui2;
   for(i=0; i<sizeof(ui2); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&l1;
   for(i=0; i<sizeof(l1); i++)
      printf("%x ", ptr[i]);
   printf("\n");
   
   ptr = (char*)&l2;
   for(i=0; i<sizeof(l2); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&ul1;
   for(i=0; i<sizeof(ul1); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&ul2;
   for(i=0; i<sizeof(ul2); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&s1;
   for(i=0; i<sizeof(s1); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&s2;
   for(i=0; i<sizeof(s2); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&us1;
   for(i=0; i<sizeof(us1); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&us2;
   for(i=0; i<sizeof(us2); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&f1;
   for(i=0; i<sizeof(f1); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&d1;
   for(i=0; i<sizeof(d1); i++)
      printf("%x ", ptr[i]);
   printf("\n");

   ptr = (char*)&c;
   for(i=0; i<sizeof(c); i++)
      printf("%x ", ptr[i]);
   printf("\n");
}
  
