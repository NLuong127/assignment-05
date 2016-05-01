/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Nelson Luong <nluong@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

#ifndef POINT_H //important
#define POINT_H

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Point {
private:
	double x;
	double y;

public:
	Point(double x_= 0, double y_= 0) : x(x_), y(y_) {}
        
	double getX() const;
	double getY() const;

	void setX(double x_);
	void setY(double y_);
        
	double distance(const Point & p);
};

#endif
