#ifndef UTIL_STRING
#define UTIL_STRING
#include <stdbool.h>
#include <stdio.h>

int length(char* arg1);
char* toLowerCase(char* arg2);
char* toUpperCase(char* arg3);
int equals(char* arg4, char* arg5);
int toInt(char* arg6);
bool stcopy(char ch[], char buff[], int size_buff);

//TP2, exo4 : ajout de la fonction scanLine
void scanLine(char* buffer, int size);
#endif