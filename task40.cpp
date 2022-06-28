#include <iostream>

int main()
{
	std::cout << "A1 = " << "B1 = " << "C1 =" << std::endl;
	double A1, B1, C1, A2, B2, C2;
	std::cin >> A1 >> B1 >> C1;
	std::cout << "A2 = " << "B2 = " << "C2 =" << std::endl;
	std::cin >> A2 >> B2 >> C2;
	double y, x, D;
	D = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1)/D;
	y = (A1 * C2 - A2 * C1)/D;
	std::cout << x << y << std::endl;
	return 0;
}