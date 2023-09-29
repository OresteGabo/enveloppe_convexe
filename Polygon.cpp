//
// Created by oreste on 29/09/23.
//

#include "Polygon.h"
#include "Polygon.h"

Polygon::Polygon() : d_premier{ nullptr } {}

Polygon::~Polygon() {

}

Sommet* Polygon::premier() const {
    return d_premier;
}

Sommet* Polygon::ajouteSommet(const QPoint& p, Sommet* prec) {

    Sommet* s=new Sommet(p, nullptr,prec);

    if(d_premier==nullptr){
        s->d_suivant=s;
        s->d_precendent=s;
        d_premier=s;
        return s;
    }
    s->d_suivant=prec->d_suivant;
    prec->d_suivant=s;
    s->d_suivant->d_precendent=s;
    d_premier=s;



    return s;
}
void Polygon::supprimeSommet(Sommet *s) {

    s->d_precendent->d_suivant=s->d_suivant;
    s->d_suivant->d_precendent=s->d_precendent;
    if(d_premier==s && s->d_suivant!=nullptr)
        d_premier=s->d_suivant;
    delete s;
}
int Polygon::size()const{
    int compteur=1;
    Sommet* s=d_premier;
    if(d_premier== nullptr)return 0;
    s=s->suivant();
    while(s!=d_premier){
        compteur++;
        s=s->suivant();
    }
    return compteur;
    //return 500000;
}
std::string Polygon::toString()const{
    std::string str="";

    Sommet* s=d_premier;
    if(s== nullptr)return "";
    str=str+"\t"+s->toString();
    s=s->suivant();
    while(s!=d_premier){
        str=str+"\t"+s->toString();
    }
    return str;
}