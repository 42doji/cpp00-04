#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(10), Fixed(30));
	Point c(Fixed(20), Fixed(0));
	Point point(Fixed(15), Fixed(15));

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;
	return 0;
}