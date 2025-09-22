#include <iostream>
#include <string>

class Payment
{
public:
	std::string paraBirimi;

	void setTutar(double t) {
		if (t > 0) {
			tutar = t;
		}
		else {
			tutar = 0.1;
		}
	};

	void pay() {
		std::cout << tutar << " " << paraBirimi << " odendi." << std::endl;
	};

private:
	float tutar;
};


int main()
{
	Payment pay;
	pay.paraBirimi = "TL";
	pay.setTutar(50.70);
	pay.pay();
}
