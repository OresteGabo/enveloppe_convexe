//
// Created by oreste on 29/09/23.
//

#ifndef ALGOGEO_SOMMET_H
#define ALGOGEO_SOMMET_H


/**
 * How to draw a line in QT
 * https://youtu.be/tc3nlNEAdig?si=5fcadxN-u0_LxEpK
 */



#include <string>
#include<iostream>
#include <string>
#include<QPoint>
#include "Point.h"

class Sommet {
    friend class Polygon;
public:
    QPoint coordonnees()const;


    Sommet* suivant()const;
    Sommet* precendent()const;
    std::string toString()const;
    void affiche()const;

private:
    Sommet(const QPoint& p, Sommet* suivant=nullptr, Sommet* precendent=nullptr);
    ~Sommet();

    QPoint d_coordonnes;
    Sommet* d_suivant;
    Sommet* d_precendent;
};


#endif //ALGOGEO_SOMMET_H
