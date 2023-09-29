//
// Created by oreste on 29/09/23.
//

#include <QPainter>
#include "MainWindow.h"
MainWindow::MainWindow(QWidget* parent):QWidget{parent}{
    resize(1500, 1000);
    Sommet* s1=d_pol.ajouteSommet(QPoint(100,300));
    Sommet* s2=d_pol.ajouteSommet(QPoint(200,290),s1);

    Sommet* s3=d_pol.ajouteSommet(QPoint(400,270),s2);
    Sommet* s4=d_pol.ajouteSommet(QPoint(420,250),s3);
    Sommet* s5=d_pol.ajouteSommet(QPoint(450,240),s2);
    Sommet* s6=d_pol.ajouteSommet(QPoint(300,150),s3);
    Sommet* s7=d_pol.ajouteSommet(QPoint(400,140),s2);
    Sommet* s8=d_pol.ajouteSommet(QPoint(300,100),s3);




    auto qPainter=QPainter();
    dessinePolygone(qPainter,d_pol);

}


void MainWindow::paintEvent(QPaintEvent*){
    QPainter paint{this};
    Sommet* s=d_pol.premier();
    if(s==nullptr){
        return;
    }
    dessinePolygone(paint,d_pol);
    do{
        QPoint p1=QPoint(s->precendent()->coordonnees().x(),s->precendent()->coordonnees().y());
        QPoint p2=QPoint(s->coordonnees().x(),s->coordonnees().y());
        paint.drawLine(p1,p2);
        s=s->suivant();
    }while(s !=d_pol.premier());
}

void MainWindow::dessinePolygone(QPainter& paint,const Polygon& pol) {
    if (pol.premier() != nullptr) {
        Sommet *s = pol.premier();
        do {

            paint.drawEllipse(s->coordonnees().x()-3,s->coordonnees().y()-3,6,6);
            //paint.drawEllipse(s->coordonnees().x()-3,s->coordonnees().y()+3,6,6);
            paint.drawLine(s->coordonnees(), s->coordonnees());
            s = s->suivant();
        } while (s != pol.premier());
    }

}
void MainWindow::dessineSommet(QPainter& paint,const QPoint& p)const{
    paint.drawEllipse(p.x()-3,p.y()-3,6,6);
}
