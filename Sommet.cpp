//
// Created by oreste on 29/09/23.
//

#include "Sommet.h"
QPoint Sommet::coordonnees()const{
    return d_coordonnes;
}
Sommet* Sommet::suivant()const{
    return d_suivant;
}
Sommet* Sommet::precendent()const{
    return d_precendent;
}

Sommet::Sommet(const QPoint& p, Sommet* suivant, Sommet* precendent):d_coordonnes{p},d_suivant{suivant},d_precendent{precendent}{
    std::cout<<"Sommet created of coordonated "<<toString()<<std::endl;
}
Sommet::~Sommet()=default;
std::string Sommet::toString()const{
    if(d_suivant==nullptr)
        return "null returned sommet d_suivant is null;+("+std::to_string(d_coordonnes.x())+","+std::to_string(d_coordonnes.y())+");";
    else
        return "null returned sommet d_suivant is not null;";
    if(d_precendent==nullptr)
        return "null returned sommet d_precendent is null;";
    return "("+std::to_string(d_precendent->d_coordonnes.x())+","+std::to_string(d_precendent->d_coordonnes.y()); /*"[("+std::to_string(d_precendent->d_coordonnes.x())+","+std::to_string(d_precendent->d_coordonnes.y())+");"+
            "("+std::to_string(d_coordonnes.x())+","+std::to_string(d_coordonnes.y())+");"+
            "("+std::to_string(d_suivant->d_coordonnes.x())+","+std::to_string(d_suivant->d_coordonnes.y())+")]";*/
}