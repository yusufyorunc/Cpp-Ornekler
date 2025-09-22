#include <iostream>
#include <string>

void mesaj() {
	std::cout << "Merhaba Dunya!\n";
}

void mesaj2(char msg, char msg2) {
	std::cout << msg << msg2;
}

void sonuc() {
	std::cout << "Sonuc fonksiyonu cagrildi.\n";
}

int topla(int sayi1, int sayi2) {
	sonuc();
	mesaj2('X', 'Y');
	return sayi1 + sayi2;
}

double topla(double sayi1, double sayi2) {
	return sayi1 + sayi2;
}

int carpma(int sayi1, int sayi2) {
	return sayi1 * sayi2;
}

void print(std::string metin = "Metin girilmedi", int a = 0, bool as = false) {
	std::cout << metin;
}


int main()
{
	mesaj();
	mesaj2('A', 'B');

	std::cout << "\nTopla: " << topla(1.5, 2.8);

	int a{ 50 };
	int b{ 50 };
	std::cout << "\nCarpma: " << carpma(a, b) << '\n';

	print("C++ Fonksiyonlar\n");
}
