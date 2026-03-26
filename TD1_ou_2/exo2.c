#include <stdio.h>
#include "util_string.h"
#include <stdlib.h>

//Exo 2 (1) : Définition de la structure
typedef struct st_point3D {
    int x;
    int y;
    int z;
    //Exo2 (4)
    // char label[32]; //étiquette du point
    //Exo2 (6)
    char * label;
} Point3D;


//Exo2 (2)
int main(){
    Point3D p1, p2; //déclaration + création des valeurs Point3D
    //initialisation de p1
    p1.x = 10;
    p1.y = 24;
    p1.z = 7;
    p1.label = malloc(32*sizeof(char)); // /!\ pour un tableau dynamique on doit tjs réservé explicitement l'espace mémoire...
    stcopy("PointA", p1.label, 32);
    //(test provisoire)//printf("test : [%s] \n", p1.label);
    Point3D* adr_p2_avant = &p2;
    Point3D* adr_p1 = &p1;
    //on "affecte" p1 à p2
    p2 = p1; // /!\ p1 et p2 conserve chacun leur valeur

    //Exo2 (3) :
    Point3D* adr_p2 = &p2; // On capture l'adresse de ce qui est dans p2
    printf("x de p2 = %i \n", (* adr_p2).x); //Vérification
    //comparaison des adresses
    if(adr_p2_avant==adr_p2) printf("L'adresse de p2 n'a pas changée. \n");
    else printf("L'adresse de p2 a changée. \n");
    if(adr_p2==adr_p1) printf("même adresse dans p1 et p2 \n");
    else printf("p1 et p2 ont des adresses différentes => ce sont des valeurs différentes. \n");

    //Exo2 (5) : on va prouver que p1 et p2 ont chacun leur propre chaine label
    //-> on peut vérifier que l'adresse de p1.label est != de celle de p2.label
    //-> on peut aussi changer la 1ère lettre de la chaine p1.label et voir si cela change p2.label
    printf("\n Avant : p1.label = '%s' et p2.label = '%s' \n", p1.label, p2.label);
    p1.label[0]='X'; // on change la 1ere lettre de p1
    printf("\n Après : p1.label = '%s' et p2.label = '%s' \n", p1.label, p2.label);

    free(p1.label); //Exo2 (6) ... et on doit aussi libérer nous même cet espace mémoire le moment venu

    return 0;
}