#ifndef PLAN2D
#define PLAN2D

//La structure Point
typedef struct st_point {
    int x,y;
} Point;

//La structure Rectangle
typedef struct st_rectangle {
    Point sommet;
    int largeur;
    int hauteur;
} Rectangle;

//Exo 5 : test 
typedef struct st_S{
    int n; 
    struct st_S * champ2; // <-solution : pointeur vers struct S (sinon "cycle sans fin")
} S; 

#endif