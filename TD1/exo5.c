// La fonction copyTab
#include <stdio.h> 
#include <stdlib.h>

int * copyTab(int tab[], int taille){// retourne une copie du tableau tab

    // /!\ la copie est un tableau dynamique => ne pas oublier le free(...)
    int * tab2 = malloc(taille * sizeof(int)); 

    for(int i=0; i<taille; i++){
        tab2[i] = tab[i];
    }

    return tab2; 

}

// Test : 
int main(){
    int t[] = {12, 89, 24, 0, -8};

    // copie du tableau 

    int * t2 = copyTab(t, 5); 

    //int * t2 = t; // (test provisoire) fausse copie 

    // Vérification 
    //t[1] = 10; // on remplace 89 par 10 --- attendu 89 ne dois pas prendre la valeur 10 

    //affichage de t 
    for(int i=0; i<5; i++) printf("%i ", t[i]);

    printf("\n");

    //affichage de t2
    for(int i=0; i<5; i++) printf("%i ", t2[i]);

    printf("\n");

    free(t2); 

    return 0; 
}