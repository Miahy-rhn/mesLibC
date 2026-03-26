// Correction 
// Exercice 4 : la fonction alphaTab

#include <stdlib.h> 
#include <stdio.h>

char * alphaTab() { // retroune un tableau de caractère
    //ce tableau sera rempli des lettres 'a' à 'z' 

    // /!\ : il faudra libérer la mémoire utilisée par ce tableau ( -> free(...)) cf.main 

    char * tab = malloc(26 * sizeof(char)); 

    // ... remplissage du tableau ...

    for(int i=0; i<26; i++){
        tab[i] = (char) ('a' + i); // même si le compilateur laisse passer 'a' + i 
    }

    return tab; 
}

//programme de test 

int main(){

    char * t = alphaTab(); 

    //affichage 
    for(int i=0; i<26; i++){
        printf("%c ", t[i]);
    }

    printf("\n"); // saut de ligne final 

    free(t);
    return 0;
}