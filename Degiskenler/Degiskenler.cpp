#include <iostream>

int main()
{

	int sayi, sayi0;
	sayi = 1;
	sayi0 = 2;

	if (sayi < sayi0)
	{
		std::cout << "sayi, sayi0 dan kucuktur" << '\n';
	}
	else
	{
		std::cout << "sayi, sayi0 dan buyuktur";
	}

	char karakter = 34;
	std::cout << karakter;

	int sayi1 = 10;
	int sayi2 = 20;
	int toplam = sayi1 + sayi2;

	int sayi3, sayi4, sonuc;
	sayi3 = 30;
	sayi4 = 40;
	sonuc = sayi3 + sayi4;

	std::cout << toplam;
	std::cout << sonuc;
	return 0;

	int8_t sayi = 44;

	std::cout << (int)sayi << '\n';
	std::cout << sayi;
	return 0;

	
	auto otoTanilama = true;
	std::cout << otoTanilama;

	int a = 1;
	int b(2);
	int c{ 3 };

	std::cout << a << b << c;


	char ch{ 97 };
	std::cout << static_cast<int>(ch);
}
