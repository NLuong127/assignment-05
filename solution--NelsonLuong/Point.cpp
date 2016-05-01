/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Nelson Luong <nluong@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
#include "Point.h"

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double x_) {
    x = x_;
}

void Point::setY(double y_) {
    y = y_;
}

double Point::distance(const Point & p) {
    return sqrt(pow(y - p.getY(), 2) + pow(x - p.getX(), 2));
}

