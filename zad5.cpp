#include <iostream>
#include <vector>
#include <array>
#include <cstdlib>
using namespace std;

int main(void)
{
	cout << "Zadanie 5.1" << endl;
	int i, j, k, l, w = 0, wi = 0;
	cout << "podaj liczbe elementow wektora" << endl;
	cin >> i;
	vector <int> vec;


	for (j = 0; j < i; j++)
	{
		vec.push_back(j);
		cout << "podaj element wektora " << j << endl;
		cin >> k;
		vec[j] = k;
	}
	cout << endl << "twoj wektor posiada " << i << " elementow, a te elementy to:" << endl;
	for (j = 0; j < i; j++)
	{
		cout << vec[j] << " ";
	}
	cout << endl;
	for (l = 0; l < i; l++)
	{
		if (vec[l] > w)
		{
			w = vec[l];
			wi = l;
		}
	}
	cout << "najwyzszy element wektora to: " << w << " posiadajacy indeks " << wi << endl << endl;
	cout << "zadanie 5.2" << endl << endl;
	
	int y, x, z, x1, z1;
	array<int, 100>arr1;
	array<int, 100>arr2;
	cout << "podaj wielkosc tablicy (do 100)" << endl;
	cin >> y;
	cout << "twoja tablica posiada " << y << " elementow" << endl;
	for (x = 0; x < y; x++)
	{
		cout << "podaj liczbe dla " << x << " wartosci pierwszej tablicy" << endl;
		cin >> x1;
		arr1[x] = x1;
	}
	for (z = 0; z < y; z++)
	{
		cout << "podaj liczbe dla " << z << " wartosci drugiej tablicy" << endl;
		cin >> z1;
		arr2[z] = z1;
	}
	cout << "liczby twojej tablicy to:" << endl;
	for (x = 0; x < y; x++)
	{
		cout << arr1[x] << "\t" << arr2[x] << endl;
	}
	cout << endl << endl;
	cout << "odwrocona tablica:" << endl;
	for (x = 0; x < y; x++)
	{
		cout << arr2[x] << "\t" << arr1[x] << endl;
	}
	return 0;
	//PRZEPRASZAM ZA PROSTOTE WYKONANIA ZADAN, ZROBILEM PIERWSZA MYSLA PRZEZ BRAK CZAS
}