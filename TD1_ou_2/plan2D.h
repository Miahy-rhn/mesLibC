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



#endif