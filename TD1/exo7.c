#include <stdio.h> 
#include <stdlib.h>

void removeLetter(char *ch, char letter){
    // supprime toutes les occurences de letter dans la chaine ch 
    int w = 0; // position d'écriture dans ch 
    //int r = 0; //position de lecture dans ch ==> sera le compteur du for

    for(int r=0; ch[r]!=0 ; r++){
        if(ch[r] != letter){
            ch[w] = ch[r];
            w++; 
        }
    }
    // on replace le marqueur de fin de chaine 
    ch[w]=0;
}

// Test 

int main(){
    char texte[]="Bonjour le monde !"; 
    
    removeLetter(texte, 'o'); 

    printf("résultat : %s \n", texte); 

    return 0; 
}