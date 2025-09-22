#include <iostream>

int main()
{
	while (true)
	{
		int sayi1(0), sayi2(0);
		char islem;

		std::cout << "birinci sayiyi girin: ";
		std::cin >> sayi1;
		std::cout << "ikinici sayiyi girin: ";
		std::cin >> sayi2;
		std::cout << "yapmak istediginiz islemi girin(+, -, *, /, q (cikis)): ";
		std::cin >> islem;

		switch (islem)
		{
		case '+':
			std::cout << "sonuc: " << sayi1 + sayi2 << std::endl;
			break;
		case '-':
			std::cout << "sonuc: " << sayi1 - sayi2 << std::endl;
			break;
		case '*':
			std::cout << "sonuc: " << sayi1 * sayi2 << std::endl;
			break;
		case '/':
			std::cout << "sonuc: " << sayi1 / sayi2 << std::endl;
			break;
		case 'q':
			std::cout << "cikis basariyla yapildi";
			return 0;
			break;
		default:
			std::cout << "gecersiz islem" << std::endl;
			break;
		}

	}
}
