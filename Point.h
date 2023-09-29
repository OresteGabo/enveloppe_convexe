//
// Created by oreste on 29/09/23.
//

#ifndef ALGOGEO_POINT_H
#define ALGOGEO_POINT_H


class Point {
int d_x;
int d_y;
public:
    Point(int dX, int dY);
    Point();

    explicit Point(int dX);

    int getDX() const;

    void setDX(int dX);

    int getDY() const;

    void setDY(int dY);
};


#endif //ALGOGEO_POINT_H
