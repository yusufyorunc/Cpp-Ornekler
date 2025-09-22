#include <iostream>

int main()
{

	int a = 10;
	int b = 5;

	int sonuc = a / b;
	std::cout << sonuc;

	int x, y;
	x = 5;
	y = 10;

	x += y;
	std::cout << x;

	int a{ 21 }, b{ 20 };
	std::cout << (a <= b) << std::endl;
}
