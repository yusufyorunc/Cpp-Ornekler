#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string* yaz = new string;
	ofstream* dosya = new ofstream("deneme.txt");

	if (dosya->is_open())
	{
		cin >> *yaz;
		*dosya << *yaz;
		dosya->close();
	}
	else
	{
		cout << "Dosya acilamadi!" << endl;
	}
}
