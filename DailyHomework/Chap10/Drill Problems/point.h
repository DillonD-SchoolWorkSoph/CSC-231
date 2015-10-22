/*
 * point.h
 *
 *  Created on: Oct 21, 2015
 *      Author: dillon
 */

#ifndef POINT_H_
#define POINT_H_
#include <string>
#include <iostream>

class point{
	public:
	point(int xx, int yy) : x(xx) , y(yy){}
	std::string to_string() const{
		std::ostringstream os;
		os << "(" << x << ", " << y << ")";
		return os.str();
	}
	int get_x() const{
		return x;
	}
	int get_y() const{
		return y;
	}
	int set(int xx, int yy){
		x = xx;
		y = yy;
	}
	private:
	int x;
	int y;
};
std::istream& operator>>(std::istream& is, Point& p){
	int x;
	int y;
	if( is >> x >> y)
		p.set(x, y);
	return is;
}
std::ostream& operator<<(std::ostream& os, const Point& p){
	os << p.to_string();
	return os;
}



#endif /* POINT_H_ */
