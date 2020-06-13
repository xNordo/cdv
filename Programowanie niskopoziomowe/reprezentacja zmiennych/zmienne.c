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
  
  printf("reprezentacja bitowa zmiennej i1: \n");
  for (char *p=(char*)&i1; p<(char*)&i1+sizeof(i1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej i2: \n");
  for (char *p=(char*)&i2; p<(char*)&i2+sizeof(i2); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej ui1: \n");
  for (char *p=(char*)&ui1; p<(char*)&ui1+sizeof(ui1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej ui2: \n");
  for (char *p=(char*)&ui2; p<(char*)&ui2+sizeof(ui2); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej l1: \n");
  for (char *p=(char*)&l1; p<(char*)&l1+sizeof(l1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej l2: \n");
  for (char *p=(char*)&l2; p<(char*)&l2+sizeof(l2); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej ul1: \n");
  for (char *p=(char*)&ul1; p<(char*)&ul1+sizeof(ul1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej ul2: \n");
  for (char *p=(char*)&ul2; p<(char*)&ul2+sizeof(ul2); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej s1: \n");
  for (char *p=(char*)&s1; p<(char*)&s1+sizeof(s1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej s2: \n");
  for (char *p=(char*)&s2; p<(char*)&s2+sizeof(s2); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej us1: \n");
  for (char *p=(char*)&us1; p<(char*)&us1+sizeof(us1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej us2: \n");
  for (char *p=(char*)&us2; p<(char*)&us2+sizeof(us2); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej f1: \n");
  for (char *p=(char*)&f1; p<(char*)&f1+sizeof(f1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej d1: \n");
  for (char *p=(char*)&d1; p<(char*)&d1+sizeof(d1); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  printf("reprezentacja bitowa zmiennej c: \n");
  for (char *p=(char*)&c; p<(char*)&c+sizeof(c); p++)
    printf("Adres: %p, wartosc: %x\n", p, *p);
  printf("\n\n");

  }
  
