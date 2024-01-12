#include <iostream>
using namespace std;

int main()
{
	int baris;

	cout << "MASUKKAN PANJANG POLA: ";
	cin >> baris;

	for (int i = 0; i <= baris; i++) 
	{
		for (int j = baris; j > i; j--) 
		{
			cout << "*";
		}
		for (int a = 0; a <= (2 * i - 1); a++) 
		{
			cout << " ";
		}
		for (int j = baris; j > i; j--) 
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}