//
// Created by oreste on 29/09/23.
//

#include "Point.h"

Point::Point(int dX, int dY) : d_x(dX), d_y(dY) {}

int Point::getDX() const {
    return d_x;
}

void Point::setDX(int dX) {
    d_x = dX;
}

int Point::getDY() const {
    return d_y;
}

void Point::setDY(int dY) {
    d_y = dY;
}

Point::Point(int dXY) : Point(dXY,dXY) {}
Point::Point() : Point(0) {}
