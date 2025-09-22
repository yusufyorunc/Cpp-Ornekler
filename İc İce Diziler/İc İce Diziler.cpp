#include <iostream>
#include <iterator>

int main()
{
	int dizi[1][1][1][1]{
		{
			{
				{
					{
						123
					}
				}
			}
		}
	};
	std::cout << dizi[0][0][0][0];

	int dizi2[2][2]{
		{
			1, 2
		},
		{
			3, 4
		}
	};
	std::cout << "\n" << dizi2[1][1];
	std::cout << "\n" << std::size(dizi[0]);
}