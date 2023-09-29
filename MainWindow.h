//
// Created by oreste on 29/09/23.
//

#ifndef ALGOGEO_MAINWINDOW_H
#define ALGOGEO_MAINWINDOW_H


#include <QWidget>
#include "Polygon.h"

class MainWindow :public QWidget{
Q_OBJECT
public:
    explicit MainWindow(QWidget* parent=nullptr);
    //QSize sizeHint()const;
private:
    Polygon d_pol;
    void paintEvent(QPaintEvent*);
    void dessinePolygone(QPainter&,const Polygon&);
    void dessineSommet(QPainter& paint,const QPoint&)const;

};


#endif //ALGOGEO_MAINWINDOW_H
