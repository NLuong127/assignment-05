/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Nelson Luong <nluong@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

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
	double getX() const {
		return x;
	}
	double getY() const {
		return y;
	}

	void setX(double x_) {
		x = x_;
	}

	void setY(double y_) {
		y = y_;
	}
	double distance(const Point & p) {
		return sqrt(pow(y - p.getY(), 2) + pow(x - p.getX(), 2));
	}
};

class Shape {
public:
	virtual bool contains(const Point & p) = 0;
};

class Rectangle : public Shape {
protected:
	double length;
	double width;
	Point center;
public:
	Rectangle(double length_ = 0, double width_ = 0, Point center = Point(0,0)) {
		length = length_;
		width = width_;
	}
	virtual ~Rectangle() {}

	double getLength() {
		return length;
	}
	double getWidth() {
		return width;
	}

	void setLength(double length_) {
		length = length_;
	}

	void setWidth(double width_) {
		width = width_;
	}

	virtual bool contains(const Point & p) {
		
	}

};

//class Square : public Rectangle {
//
//};
//
//class Ellipse : public Shape {
//
//};
//
//class Circle : public Ellipse {
//
//};

int main() {

	Point a(1,1);
	Point b(2,2);

	cout << "Distance: " << a.distance(b) << endl;



	//Shape * a = new Rectangle;
	//Shape * b = new Square;

	//a->contains();
	//b->contains();




	return 0;
}


