#include <iostream>
#include <string>
#include "coord.h"
#include "performer.h"

#ifndef CHART_H
#define CHART_H
	class chart {
		private:
			int chartId;
			string title;
		public:
			// constructors
			chart();
			chart(string);

			// public methods
			void setTitle(string);
			string getTitle();

			// Overloaded operators
			friend std::ostream &operator<<(std::ostream &os, const chart& c);
			void operator = (const chart& c);
	};
#endif