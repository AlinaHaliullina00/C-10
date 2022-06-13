#include <iostream>
#include<fstream>
#include <iomanip>
using namespace std;

int main()
{

	int i, n = 0;
	float x;
	ofstream file("F.txt");
	cout << " Kolichestvo chisel ";
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> x;
		file << x << " ";
	}
	file.close();
	ifstream vvod("F.txt");
	float mas[100];
	i = 0; {
	do
	{
		vvod >> mas[i];
		i++;
	} while (!vvod.eof());
}
	vvod.close();
	
	int mas2[100];
	for (i = 0; i < n; i++) {
		mas2[i] = int(mas[i]);
	};
	ofstream file2("G.txt");
	for (i = 0; i < n; i++) {
		cin >> mas2[n];
		file2 << mas2[i] << " ";
	}
		}

