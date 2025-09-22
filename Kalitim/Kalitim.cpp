#include <iostream>
#include <string>

class Silah {
public:
	std::string isim;
	int mermiKapasitesi;
};


class Ak47 : public Silah {
public:
	bool seriTek;
	int kayisUzunluk;
	bool durbun;

	void ates() {
		std::cout << "Ak47 Ates etti" << std::endl;
	};
};

class Pistol : public Silah {
public:
	std::string desen;

	void ates() {};
};

class G3 : public Silah {
public:
	bool seriTek;
	int kayisUzunluk;
	int kurmaPozisyonu;

	void ates() {};
};

void goster(Silah* silahPtr) {
	std::cout << "Silah ismi: " << silahPtr->isim << std::endl;
};

int main()
{
	Ak47 ak47;
	ak47.isim = "Buz AK47";
	ak47.mermiKapasitesi = 30;
	ak47.seriTek = true;
	ak47.kayisUzunluk = 40;
	ak47.durbun = false;
	ak47.ates();
	goster(&ak47);

	Pistol glock;
	glock.isim = "Glock 19";
	glock.mermiKapasitesi = 15;
	glock.desen = "Col Kaplama";
	goster(&glock);

	G3 g3;
	g3.isim = "G3 Piyade";
	g3.mermiKapasitesi = 20;
	g3.seriTek = true;
	g3.kayisUzunluk = 50;
	g3.kurmaPozisyonu = 0;
	goster(&g3);
}