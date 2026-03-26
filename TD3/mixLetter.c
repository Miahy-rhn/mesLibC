#include "util_string.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
  char buffer[32];

  printf("Veuillez écrire un mot : ");
  scanLine(buffer, 32);

  printf("Vous avez écrit [%s] \n", buffer);

  srand(time(NULL));

  int longueur = length(buffer);
  for (int i = 0; i<longueur; i++) {
    int pos = rand() % (longueur-1-i+1);
    char tmp = buffer[i];
    buffer[i] = buffer[pos];
    buffer[pos] = tmp;
  }

  printf("\n Résultat : [%s] \n", buffer);

  return 0;
}
