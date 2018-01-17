#include "coord.h"
#include <iostream>

// Constructors
coord::coord() {
	xCoord = 0.0;
	yCoord = 0.0;
}
coord::coord(float x, float y) {
	xCoord = x;
	yCoord = y;
}

// Public Methods
float coord::getX() {
	return xCoord;
}
float coord::getY() {
	return yCoord;
}
void coord::setX(float x) {
	xCoord = x;
}
void coord::setY(float y) {
	yCoord = y;
}
void coord::setCoords(float x, float y) {
	xCoord = x;
	yCoord = y;
}

// Overloaded operators
std::ostream &operator<<(std::ostream &os, const coord& c) {
	return os << "(" << c.xCoord << ", " << c.yCoord << ")";
}
void coord::operator = (const coord& c) {
	xCoord = c.xCoord;
	yCoord = c.yCoord;
}