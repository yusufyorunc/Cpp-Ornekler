#include <iostream>
#include <string>

class Silah
{
public:
	std::string isim;
	int mermiKapasitesi;
	std::string renk;
	virtual void ates() {
		std::cout << "Silah ates ediyor!" << std::endl;
	};
};

class Ak47 : public Silah {
public:
	bool seriTek;
	int kayisUzunluk;
	bool durbun;

	void ates() {
		Silah::ates();
		std::cout << "Ak47 ates ediyor!" << std::endl;
	}
};

class Pistol : public Silah {
public:
	int kurmaKoluDeseni;
	void ates() {
		std::cout << "Pistol ates ediyor!" << std::endl;
	}
};

class M1 : public Silah {
public:
	bool seriTek;
	int kayisUzunluk;
	int kurmaPozisyonu;
	void ates() {
		std::cout << "M1 ates ediyor!" << std::endl;
	}

};

//void ates(Silah* silahPtr) {
//	silahPtr->ates();
//}

int main()
{
	Ak47 ak47;
	ak47.ates();
	/*
	Pistol pistol;
	M1 m1;

	
	ates(&pistol);
	ates(&m1);*/

	return 0;

}
