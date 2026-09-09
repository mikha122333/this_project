#include "pch.h"
#include "Triangle.h"
TEST(test_triangle_lib, test_cons) {
	Triangle res;
	EXPECT_TRUE(res.hight(), 1);
	EXPECT_TRUE(res.side(), 1);
}
TEST(test_triangle_lib, test_exc_h) {
	Triangle test;
	EXPECT_ANY_THROW(test.hight(-3));
}
TEST(test_triangle_lib, test_exc_s) {
	Triangle test;
	EXPECT_ANY_THROW(test.side(-4));
}
TEST(test_triangle_lib, test_sq_eq) {
	Triangle test;
	test.hight(5);
	test.side(2);
	EXPECT_TRUE(test.find_square(), 5);
}