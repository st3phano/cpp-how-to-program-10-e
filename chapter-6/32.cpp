//Calculate the distance between two points using pythagoras theorem
#include <cmath>

double distance(const double x1, const double y1, const double x2, const double y2) {
	const double side1{x1 - x2};
	const double side2{y1 - y2};

	return std::sqrt(side1 * side1 + side2 * side2);
}
