#include <stdio.h>   // pour la fonction printf
#include <stdlib.h>   // pour la fonction atoi (conversion chaine -> int)

int main(int nbargs, char** args){ // rappel args[0] contient le chemin du programme
    if (nbargs != 3){   // vérification du nombre d'arguments
        printf("Erreur : vous devez fournir des valeurs entières a et b \n");
        return -1;  // fin du programme
    }

    // on doit convertir les chaines a et b en nombre
    int a = atoi(args[1]);
    int b = atoi(args[2]);

    // on va s'assurer que a <= b

    if (a>b) { //on va inverser a et b
        int temp =a ;
        a = b;
        b = temp;    
    }

    //test intermédiaire
    printf(" a =%i, b = %i \n", a, b);

    // Créer un tableau tab rempli avec toutes les valeurs entières comprises dans [a;b]

    // Taille du tableau

    int taille = b - a + 1;

    // déclarer la variable tableau et le dimensionner

    int * tab = malloc(taille * sizeof(int));

    //intiitaliser le tableau avec totues les valeurs entières comprises dans [a,b]
    for(int i =0; i<taille; i++){
        tab[i] = a + i;
    }


    // Test : affichage du contenu du tableau
    for (int i=0; i<taille; i++){
        printf("%i ", tab[i]);
    }

    printf("\n");
    free(tab);
    return 0; // tout s'est bien passé
}