#include <iostream>
#include "coord.h"
#ifndef PERFORMER_H
#define PERFORMER_H
	class performer {
		private:
			char label;
			coord position;
		public:
			// constructors
			performer();
			performer(char);
			
			// public methods
			void setLabel(char);
			void setPosition(float,float);
			void setPosition(coord);
			void setxPosition(float);
			void setyPosition(float);
			coord getPosition();

			// Overloaded operators
			friend std::ostream &operator<<(std::ostream &os, const performer& p);
			void operator = (const performer& p);
	};
#endif