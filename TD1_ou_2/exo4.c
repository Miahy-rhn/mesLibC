/* On va demander une série de saisie x,y pour des points 
puis afficher leurs coordonnées dans une table, ex :
     1     2    3    4    5   6
X : | 012 | 004 | 211 |*/

#include <stdio.h>
#include "plan2D.h"
#include "util_string.h"

char* format3digits(char buffer[], int x){ // traduit x en une chaine de 3lettres
    x = x %1000; // on s'assure ainsi que x ne dépasse pas 999
    // On va capturer le chiffre des centaines
    int c = x / 100;// ou (x - (x%100)) / 100;
    buffer[0] = '0' + c;
    //on va capturer les dizaines
    int d = (x - (c*100)) / 10;
    buffer[1] = '0' + d;
    //On va capturer les unité
    int u = x % 10;
    buffer[2] = '0' + u;
    
    buffer [3]=0; //fin de la chaine

    return buffer;
}

int main(int nbArgs, char** args){
    //vérification des paramètres de lancement
    if (nbArgs != 2){
        printf("Erreur : vous devez indiquer le nbr de point à gérer. \n");
        return 1; //fin du programme
    }
    //convertion du paramètre
    int nbPoint = toInt(args[1]);
    if (nbPoint < 1){
        printf("Erreur : le paramètre doit être un entier positif. \n");
        return 2; //fin du programme
    }
    //Boucle de saisie des nbPoint points
    Point tab[nbPoint]; // ok depuis la norme C99
    char buffer[20]; //buffer les saisies clavier
    for(int i=0; i<nbPoint; i++){
        printf("Coordonnées du point n°%i : \n", i+1);
        int x = -2;
        do {
            if(x!=-2) printf("Erreur : vous devez saisir une valeur entre 0 et 999 \n");
            printf(" -> x = "); scanLine(buffer, 20);
            x = toInt(buffer);
        }while(x<0 || x > 999);
        int y = -2;
        do {
            if(y!=-2) printf("Erreur : vous devez saisir une valeur entre 0 et 999 \n");
            printf(" -> y = "); scanLine(buffer, 20);
            y = toInt(buffer);
        }while(y<0 || y > 999);
        //on fixe ces coordonnées sur le point i
        tab[i].x = x;
        tab[i].y = y;
    }
    //Affichage de la table finale
    printf("\n ------- \n");

    //ligne des numéros des points
    printf("    "); // 4 espaces avant chaque numéro (chaque numéro aura 2 espaces)
    for(int i = 0; i<nbPoint; i++) printf("  %i  ", i+1);
    printf("\n");

    //ligne des X
    printf("X : |"); // Chaque valeur X aura 1 espace avant, 3 digits, et 1 espace + | après
    for(int i = 0; i<nbPoint; i++) printf(" %s |", format3digits(buffer, tab[i].x));
    printf("\n");
    return 0;

    //ligne des Y
    printf("Y : |"); // Chaque valeur Y aura 1 espace avant, 3 digits, et 1 espace + | après
    for(int i = 0; i<nbPoint; i++) printf(" %s |", format3digits(buffer, tab[i].y));
    printf("\n");
    return 0;
}