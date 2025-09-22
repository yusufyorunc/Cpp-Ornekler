#include <iostream>

class Hesapla {
public:
	int genislik;
	int yukseklik;
	int alan;

	void giris() {
		std::cout << "Genislik gir: ";
		std::cin >> genislik;

		std::cout << "Yukseklik gir: ";
		std::cin >> yukseklik;
	};

	void hesapla() {
		alan = genislik * yukseklik;
		std::cout << "Alan: " << alan << std::endl;
	};
};

//class hacim {
//public:
//	int uzunluk;
//	int genislik;
//	int yukseklik;
//	int hacim;
//
//	void veriler() {
//		std::cout << "Hacim hesaplama " << std::endl;
//		std::cout << "Uzunluk gir: ";
//		std::cin >> uzunluk;
//
//		std::cout << "Genislik gir: ";
//		std::cin >> genislik;
//
//		std::cout << "Yukseklik gir: ";
//		std::cin >> yukseklik;
//
//	};
//	void hacimhesapla() {
//		hacim = uzunluk * genislik * yukseklik;
//		std::cout << "Hacim: " << hacim << std::endl;
//	}
//};

int main()
{
	/*hacim kutu;
	kutu.veriler();
	kutu.hacimhesapla();*/


	Hesapla dikdortgen;
	dikdortgen.giris();
	dikdortgen.hesapla();
	return 0;
}
