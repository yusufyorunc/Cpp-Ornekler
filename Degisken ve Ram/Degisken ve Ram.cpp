#include <iostream>

int main()
{

	//int a(10);

	//std::cout << &a; //BELLEK ADRESİNİ VERİR

	int x{ 20 };

	int* xPtr = &x;
	//int * xPtr= &x;
	//int *xPtr = &x;

	std::cout << xPtr;

	int b(10);

	std::cout << *&b;
}
