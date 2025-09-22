#include <iostream>

template <typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
};

template <typename T, typename U>
T min(T a, U b) {
	return (a < b) ? a : b;

}

template <typename T>
class Mat {
public:
	T a{};
	T b{};

	T topla() {
		return a + b;
	}
};

int main()
{

	Mat<int> t;
	t.a = 5;
	t.b = 7;
	std::cout << t.topla() << std::endl;

	std::cout << max(2, 8) << std::endl;
	std::cout << max<double>(1.5, 7.4) << std::endl;

	std::cout << min(2, 8.7) << std::endl;
	std::cout << min<float>(2.880, 8) << std::endl;

}
