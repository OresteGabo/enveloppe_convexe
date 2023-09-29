//
// Created by oreste on 29/09/23.
//

#ifndef ALGOGEO_POLYGON_H
#define ALGOGEO_POLYGON_H


#include "Sommet.h"
#include <string>

class Polygon {
public:
    Polygon();
    ~Polygon();
    Sommet* premier()const;
    Sommet* ajouteSommet(const QPoint&, Sommet* prec=nullptr);
    void supprimeSommet(Sommet *s);
    int size()const;
    //void dessine()const;
    std::string toString()const;

private:
    Sommet* d_premier;
};


#endif //ALGOGEO_POLYGON_H
