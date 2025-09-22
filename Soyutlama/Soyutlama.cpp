#include <iostream>

class Hayvan {
public:
	virtual void sesCikar() = 0;
};

class Kopek : public Hayvan {
public:
	void sesCikar() {
		std::cout << "Hav hav!" << std::endl;
	};
};

class Kedi : public Hayvan {
public:
	void sesCikar() {
		std::cout << "Miuv Miuv!" << std::endl;
	};
};

class Ordek : public Hayvan {
public:
	void sesCikar() {
		std::cout << "Vak Vak!" << std::endl;
	};
};

class Kus : public Hayvan {
public:
	void sesCikar() {
		std::cout << "Cik Cik!" << std::endl;
	};
};

void tumSesleriCikar(Hayvan* hayvan) {
	hayvan->sesCikar();
}

int main()
{
	Kopek kopek;
	Kedi kedi;
	Ordek ordek;
	Kus kus;

	tumSesleriCikar(&kus);
}
