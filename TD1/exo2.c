#include <stdio.h>
#include <stdlib.h>

int main(int nbarg, char** args){

    char tab1[] = "Bonjour";
    char tab2[] = "Bonjour";
    char* tab3 = "Bonjour";
    // (5)
    char* const tab4 = "Bonjour";

// (1) On va prouver que les chaînes identiques sont stockées en un seul exxemplaire en mémoire (même adresse).
    if (tab3 == tab4) {
        printf("La chaîne 'Bonjour' de tab3 est au même endroit en mémoire que celle de tab4. \n");
    } else {
        printf("Il y a au moins 2 emplacements mémoire qui contiennent la chaine 'Bonjour' \n");
    }

// (2) On va prouver que l'adresse mémoire de tab1 est différente de celle de tab2 et de tab3. 
    if (tab1 == tab2) {
        printf("La chaîne 'Bonjour' de tab1 est au même endroit en mémoire que celle de tab2. \n");
    } else {
        printf("Il y a au moins 2 emplacements mémoire qui contiennent la chaine 'Bonjour' \n");
    }

// (3) On veut montrer qu'on ne peut pas modifier l'adresse mémoire de tab3 et de tab4 
    // tab3 = "Bonjour !";   // Ici, nous avons une erreur lors de la compilation
    // print(tab3);

// (4) 
    tab1[0] = 'Z';
    tab3 = tab1;
    printf(" ==> %s \n", tab3);


//(5)
    tab4 = tab1;
    tab4[0] = 'C';
    printf(" ==> %s \n", tab4);
return 0;
}