#include <iostream>
#include <string>

class Hata {
public:
	Hata(const std::string msj) : mesaj(msj) {
	};

	std::string getMesaj() {
		return this->mesaj;
	}
private:
	std::string mesaj;

};



double bolme(int a, int b) {
	try
	{
		if (b < 1)
		{
			throw Hata("Hata olustu\n");

		}
		return a / b;
	}
	catch (int)
	{
		std::cout << "Sayi sifira bolunemez";
	}
	catch (Hata err) {
		std::cout << err.getMesaj();
	};
};


int main()
{
	std::cout << bolme(10, 0);
}
