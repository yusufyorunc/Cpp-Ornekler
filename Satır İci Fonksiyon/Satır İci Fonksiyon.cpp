#include <iostream>

inline int toplama(int a, int b) {
	return a + b;
}


int main()
{
	int cıktı = toplama(5, 10);

	std::cout << cıktı;
}