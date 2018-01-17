#include <iostream>
#ifndef COORD_H
#define COORD_H
	class coord {
		private:
			float xCoord;
			float yCoord;
		public:
			// constructors
			coord();
			coord(float, float);
			// methods
			float getX();
			float getY();
			void setX(float);
			void setY(float);
			void setCoords(float, float);
			// Overloaded operators
			friend std::ostream &operator<<(std::ostream &os, const coord& c);
			void operator = (const coord& c);
	};
#endif