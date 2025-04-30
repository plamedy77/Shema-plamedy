#include <stdio.h>


int main() {

  char name[50]; 
  char city[30]; 

  printf("Enter your name: ");

  scanf("%s", name);

  printf("Enter your city: ");
  scanf("%s", city);

  printf("\nHello, %s from %s!\n", name, city);

  return 0;
}

