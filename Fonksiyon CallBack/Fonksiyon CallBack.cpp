#include <iostream>


int toplama(int a, int b) {
	return a + b;
}


int callback(int(*toplamaIslemi)(int, int)) {
	int a = toplamaIslemi(10, 10);
	return a;
}

using fint = int(*)(int, int);

int callback2(fint ftopla) {
	int x = ftopla(20, 20);
	return x;
}

int main()
{

	int b = callback(toplama);
	int c = callback2(toplama);

	std::cout << b << '\n' << c;
}
