#include "performer.h"
#include "coord.h"

// Constructors
performer::performer() {
	label = 'X';
	position = coord();
}
performer::performer(char l) {
	label = l;
	position = coord();
}

// Public Methods
void performer::setLabel(char l) {
	label = l;
}
void performer::setPosition(float x,float y) {
	position.setCoords(x,y);
}
void performer::setPosition(coord c) {
	position = c;
}
void performer::setxPosition(float x) {
	position.setX(x);
}
void performer::setyPosition(float y) {
	position.setY(y);
}
coord performer::getPosition() {
	return position;
}

// Overloaded operators
std::ostream &operator<<(std::ostream &os, const performer& p) {

	return os << "{\n\tlabel: " << p.label << "\n\tposition: " << p.position << "\n}";
}
void performer::operator = (const performer& p) {
	label = p.label;
	position = p.position;
}