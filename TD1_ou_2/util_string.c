#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "util_string.h"


int length(char* arg1){
    int l = 0;

    while (arg1[l] != '\0'){
        l++;
    }

    return l;
}

char* toLowerCase(char* arg2){
    for(int i = 0; arg2[i] != '\0'; i++){
        if(arg2[i] >= 'A' && arg2[i] <= 'Z') {
            arg2[i] += 32;
        }
    }
    return arg2;
}

char* toUpperCase(char* arg3){
    for(int i = 0; arg3[i] != '\0'; i++){
        if(arg3[i] >= 'a' && arg3[i] <= 'z') {
            arg3[i] -= 32;
        }
    }
    return arg3;
}

int equals(char* arg4, char* arg5){
    int test = 0;
    for(int i = 0; arg4[i] != '\0'; i++){
        if(arg4[i] != arg5[i]){
            test ++;
        }
    }
    return test;
}

bool equals_1(char* t1, char*t2){
    int n1 = length(t1);
    int n2 = length(t2);
    if(n1 != n2) return false; // Taille différents

    // on regarde chacun des caractères
    for(int i =0; i<n1; i++){
        if(t1[i] != t2[i]) return false;  // une lettre différente => t1 != t2
    }

    //ici toutes les lettres sont identiques
    return true; // ==> t1 == t2
}

bool stcopy(char ch[], char buff[], int size_buff){ // copie la chaine ch dans buff (max(size_buff-1)) caractere
    /// -> retourne true si la copie est complète (il y avait assez de place dans buff)
    int i;
    for(i=0; ch[i]!=0 && i<size_buff; i++){ //tq on a pas atteint la fin de la chaine 
        buff[i] = ch[i];
    }
    buff[i] = 0; //fin de chaine dans buff

    return ch[i] == 0;
} // copie la chaine ch dans buff (max(size_buff-1)) caractere




int toInt(char* arg6){
    int rslt = 0;
    for(int i = 0; arg6[i] != '\0'; i++){
        if(arg6[i] >= '0' && arg6[i] <= '9'){
            rslt = rslt * 10 + (arg6[i] - '0');
        }
        else {
            rslt = -1;
        }
    }
    return rslt;
}