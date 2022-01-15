#include <iostream>
using namespace std;

int main()
{
	cout << "WITAMY W GRZE W ZYCIE" << endl << "reguly gry sa ustawione wedlug regul Conway'a, z mala zmiana podania wielkosci planszy" << endl;
	cout << "reguly gry sa oznaczone 23/3, czyli kazda zywa komorka musi posiadac 2-3 zywych sasiadow aby dalej byla zywa, a kazda martwa zeby ozyc potrzebuje 3 zywych sasiadow" << endl << endl;
	cout << "na poczatek podaj wymiar planszy, o wielkosci minimum 5x5 i nie wiekszej niz 100, kazda mniejsza liczba niz 5 bedzie mnozona przez 10 a 0 bedzie oznaczalo 5" << endl;
	int a; int b;
	cin >> a; cin >> b;
	if (a < 5 or a > 100)
	{
		if (a < 5)
		{
			a = 5;
		}
		else (a > 100);
		{
			a = 100;
		}
	}
	if (b < 5 or b > 100)
	{
		if (b < 5)
		{
			b = 5;
		}
		else (b > 100);
		{
			b = 100;
		}
	}
	cout << "twoja plansza ma wymiary " << a << "x" << b << endl;
	char table[100][100];
	int p = (a * b) / 2;
	int A[50]; int B[50];
	int A1;
	int zyje = 1;
	int niezyje = 0;
	char zywa = '#';
	char martwa = ' ';
	cout << "podaj ilosc komorek zywych na start (maksymalnie " << p << ")" << endl;
	cin >> A1;

	if (A1 <= a * b / 2)
	{
		for (int i = 0; i < A1; i++)
		{
			cout << "podaj miejsce komorki (najpierw wartosc a pozniej b)" << endl;
			cin >> A[i] >> B[i];
		}
	}
	else
	{
		cout << "ilosc komorek zywych bedze za duza" << endl;
		exit(0);
	}
	
	cout << endl << endl;
	for (int k = 0; k < a; k++)
	{
		for (int l = 0; l < b; l++)
		{
			int o = 0;
			for (; o < A1; o++)
			{
				int j = 0;
				if (A[o] - 1 == k && B[o] - 1 == l)
				{
					j = 1;
				}
				
				if (j == 1)
				{
					table[k][l] = zywa;
					cout << table[k][l];
				}
				else
				{
					table[k][l] = martwa;
					cout << table[k][l];
				}
			}
		}
		cout << endl;
	}

	int z; int w;
	cout << endl << endl;

	for (int k = 0; k < a; k++)
	{
		for (int l = 0; l < b; l++)
		{
			int x = 0; int y = 0;
			for (z = l - 1; z < l + 1; z++)
			{
				for (w = k - 1; w < k + 1; w++)
				{

					if (table[z][w] != table[k][l])
					{

						if (table[z][w] == zywa)
						{
							x++;
						}
						else (table[z][w] == martwa);
						{
							y++;
						}
					}
				}
			}
			if (table[k][l] == zywa)
			{
				if (x == 2 || x == 3)
				{
					table[k][l] = zywa;
				}
				else
				{
					table[k][l] = martwa;
				}
			}
			else (table[k][l] == martwa);
			{
				if (x == 3)
				{
					table[k][l] = zywa;
				}
				else
				{
					table[k][l] = martwa;
				}
			}
			cout << table[k][l];
		}
		cout << endl;
	}

	return 0;
}