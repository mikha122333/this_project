#pragma once
#include <stdexcept>
class Triangle {
	double _side;
	double _hight;
public:
	Triangle();
	double find_square()const noexcept;
	double side()const noexcept;
	double hight()const noexcept;
	void side(const double side);
	void hight(const double gight);
};