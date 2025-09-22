#include <iostream>

int main()
{

	int sayi1(0), sayi2(0);
	char islem;

	std::cout << "birinci sayiyi girin: ";
	std::cin >> sayi1;
	std::cout << "ikinici sayiyi girin: ";
	std::cin >> sayi2;
	std::cout << "yapmak istediginiz islemi girin(+, -, *, /): ";
	std::cin >> islem;

	if (islem == '+')
	{
		int toplama = sayi1 + sayi2;
		std::cout << "sonuc: " << toplama << std::endl;
	}
	else if (islem == '-')
	{
		int cıkarma = sayi1 - sayi2;
		std::cout << "sonuc: " << cıkarma << std::endl;
	}
	else if (islem == '*')
	{
		int carpma = sayi1 * sayi2;
		std::cout << "sonuc: " << carpma << std::endl;
	}
	else if (islem == '/')
	{
		int bolme = sayi1 / sayi2;
		std::cout << "sonuc: " << bolme << std::endl;
	}
	else
	{
		std::cout << " islem yapilamadi" << std::endl;
	}
}
