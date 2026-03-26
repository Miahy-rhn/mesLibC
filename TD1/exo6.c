#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> // pour la fonction strlen(...) ne compte pas la valeur de fin ("/0" ou 0)

// La fonction concatString

char * concatString(char * ch1, char * ch2){
    // /!\ retourne un tableau dynamique (->free(...))
    // retourne la chaine produit par la concaténation des chaiens ch1 et ch2
        //ex: ch1 = "Bonjour" et ch2 = "Le monde" => retourne : "BonjourLe monde"

    int t1 = strlen(ch1);
    int t2 = strlen(ch2); 

    int taille_total = t1+t2+1; // +1 = marqueur de fin (le 0 final)

    char * rep = malloc(taille_total * sizeof(char)); 

    // Copie de la chaine ch1
    for(int i=0; i<t1; i++){
        rep[i] = ch1[i];
    }

    // Copie de la chaine ch2
    for(int i=0; i<t2; i++){
        rep[i+t1] = ch2[i];
    }

    // Fixation de la fin de la chaine de rep 

    rep[taille_total-1] = 0; 

    return rep; 

}

//Test unitaire

int main(int nbArgs, char** args){ // On va concaténer les 2 premiers arguments donnés au lancement  

    /*char * l = malloc(1 * sizeof(char));
    l[0] = 'A'; // ou (* l) = 'A'; 
    printf("%c \n", *l); // ou l[0]*/

    if(nbArgs !=3){
        printf("Erreur : merci de donner 2 mots dans la commande de lancement. \n");
        return 1; // fin d'exécution 
    }

    char* mot1 = args[1];
    char* mot2 = args[2]; 

    char * rep = concatString(mot1, mot2); 

    printf("résultat : %s \n", rep); 

    free(rep);

    return 0;
}

