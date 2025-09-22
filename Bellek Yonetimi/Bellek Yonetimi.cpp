#include <iostream>
#include <memory>
#include <string>

class Silah
{
public:

	std::string isim = "Tabanca";


	Silah() {
		std::cout << "Silah olusturuldu" << std::endl;
	};
	~Silah() {
		std::cout << "Silah silindi" << std::endl;
	};

private:

};

class SharedPtr
{
public:
	int a{};
	SharedPtr() {
		std::cout << "SharedPtr olusturuldu" << std::endl;
	};
	~SharedPtr() {
		std::cout << "SharedPtr silindi" << std::endl;
	};

private:

};


int main()
{
	//Steack de olusturuluyor		//Nesene head de olusturuluyor
	std::shared_ptr<SharedPtr> ptr = std::make_shared<SharedPtr>();
	{
		std::cout << "ptr referans sayisi: " << ptr.use_count() << std::endl;
	}


	/*int adet = 0;

	std::cout << "Kac adet dizi elemani mevcut? ";
	std::cin >> adet;

	int* dizi = new int[adet];

	for (int i = 0; i < adet; i++) {
		std::cout << "Dizi elemanini giriniz: ";
		std::cin >> dizi[i];
	};

	for (int i = 0; i < adet; i++) {
		std::cout << "Dizi elemani: " << dizi[i] << std::endl;
	};
	delete[] dizi;*/

	/*Silah* silah = new Silah();
	std::cout << silah->isim << std::endl;
	delete silah;*/

	/*int* a = new int;

	*a = 10;

	std::cout << "delete oncesi" << a << std::endl;

	delete a;*/
}
