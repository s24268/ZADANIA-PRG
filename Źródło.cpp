#include <iostream>
using namespace std;

int main(void)
{
	cout << "Zadanie 4.1" << endl;
	cout << "wpisz liczbe dlugosci rzedu (do 100)" << endl;
	unsigned int i;
	int k;
	int j;
	int l = 0;
	cin >> i;
	int tab[100];
	for (j = 0; j < i; j++)
	{
		cout << "wpisz liczbe ktora bedzie lezaza w " << j << " rzedzie tablicy ";
		cin >> k;
		tab[j] = k;
	}
	cout << "twoja tablica o dlugosci " << i << " posiada liczby:" << endl << endl;
	for (j = 0; j < i; j++)
	{

		cout << tab[j] << " ";
		if (tab[j] > l)
		{
			l = tab[j];
		}

	}

	cout << endl << endl << "najwieksza liczba w tablicy jest: " << l << endl << endl;

	cout << "Zadanie 4.2" << endl;
	cout << "wpisz dlugosc tablicy do 100" << endl;
	unsigned int I; int L; int L1; int LW = 0; int Lw = 0; int lw = 0;
	cin >> I;
	int tab2[100];
	for (j = 0; j < I; j++)
	{
		cout << "wpisz liczbe ktora lezy w " << j << "rzedzie tablicy ";
		cin >> k;
		tab2[j] = k;
	}
	cout << "twoja tablica o dlugosci " << I << " posiada liczby:" << endl << endl;
	for (j = 0; j < I; j++)
	{
		cout << tab2[j] << " ";
	}

	for (L = 0; L < I; L++)
	{
		LW = 0;
		for (L1 = 0; L1 < I; L1++)
		{
			if (tab2[L] == tab2[L1])
			{
				LW++;
			}
		}

		if (LW > Lw)
		{
			Lw = LW;
			lw = tab2[L];
		}
	}
	cout << endl << "liczba najczesciej sie powtarzajaca w tablicy jest " << lw << " powtarzajace sie " << Lw << " razy" << endl;

	cout << endl << "Zadanie 4.3" << endl;
	int tab3[10][10];
	int kol; int wier; int k1;
	for (kol = 0; kol < 10; kol++)
	{
		for (wier = 0;wier < 10;)
		{
			while (wier == 0)
			{
				tab3[kol][wier] = kol;
				k1 = kol;
				cout << tab3[kol][wier] << " ";
				wier++;
			}
			while (wier == 1)
			{
				tab3[kol][wier] = k1 + k1;
				cout << tab3[kol][wier] << " ";
				wier++;
			}
			while (wier == 2)
			{
				tab3[kol][wier] = k1 * k1;
				cout << tab3[kol][wier] << " ";
				wier++;
			}
			while (wier == 3)
			{
				tab3[kol][wier] = wier + kol;
				cout << tab3[kol][wier] << " ";
				wier++;
			}
			while (wier == 4)
			{
				tab3[kol][wier] = wier - kol;
				cout << tab3[kol][wier] << " ";
				wier++;
			}
			while (wier < 10)
			{
				tab3[kol][wier] = 0;
				cout << tab3[kol][wier] << " ";
				wier++;
			}
			

			cout << endl;

		}
	}

	return 0;
}