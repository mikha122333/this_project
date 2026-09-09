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
Triangle::Triangle() {
	_side = 1;
	_hight = 1;
}
double Triangle::find_square() const noexcept {
	return 0.5 * _hight * _side;
}
double Triangle::side()const noexcept {
	return _side;
}
double Triangle::hight()const noexcept {
	return _hight;
}
void Triangle::side(const double side) {
	if (side <= 0)
		throw std::range_error("too small side");
	_side = side;
}
void Triangle::hight(const double hight) {
	if (hight <= 0)
		throw std::range_error("too small hight");
	_hight = hight;
}