#include <stdio.h>

int I;
char C;
long L;
short S;  
double D;

main(){
  int i;
  char c;
  long l;
  short s;  
  double d;

  printf("Adres zmiennej I to: %p\n", &I);
  printf("Adres zmiennej C to: %p\n", &C);
  printf("Adres zmiennej L to: %p\n", &L);
  printf("Adres zmiennej S to: %p\n", &S);
  printf("Adres zmiennej D to: %p\n", &D);

  printf("Adres zmiennej i to: %p\n", &i);
  printf("Adres zmiennej c to: %p\n", &c);
  printf("Adres zmiennej l to: %p\n", &l);
  printf("Adres zmiennej s to: %p\n", &s);
  printf("Adres zmiennej d to: %p\n", &d);
}
  