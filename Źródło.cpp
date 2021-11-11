#include <iostream>
using namespace std;

int N; int W; int K; int R; int Q; int Z;
int a; int b; int k = 1; int L = 1; int l;

int main(void)
{

	cout << "ZADANIE 2.1:" << endl; cout << endl;
	cout << "wprowadz liczbe z ktorej utworzysz szeregi" << endl; cout << endl;
	cin >> N; cout << endl;
	if (N <= 0)
	{
		cout << "z tej liczby nie utworzy sie szeregu" << endl;
	}
	else
	{
		for (W = 1; N >= W; W++)
		{

			Q = Z;
			cout << "szereg: " << W << endl;

			R = 0;

			for (K = 1; W >= K; K++)
			{
				cout << K << " ";
				R = R + K;

			}

			cout << endl;
			cout << "suma szeregu rowna sie: " << R << endl; cout << endl;
			Z = Q + R;
		}
		cout << "suma liczb w szeregach rowna sie: " << Z << endl; cout << endl;
	}


	{

		cout << "ZADANIE 2.2:" << endl; cout << endl;
		cout << "wprowadz wartosc a" << endl;
		cout << "a == "; cin >> a; cout << endl;
		cout << "wprowadz wartosc b" << endl;
		cout << "b == "; cin >> b; cout << endl;

		if (a <= 0 & b <= 0)
		{
			cout << "wprowadz liczby dodatnie calkowite" << endl;
		}
		else
		{
			cout << "wiersz o dlugosci a\n";
			for (k; a >= k; k++)
			{
				cout << "*";
			}
			cout << endl; cout << endl;

			cout << "kolumna o dlugosci b\n";
			for (L; b >= L; L++)
			{
				cout << "*\n";
			}
			cout << endl; cout << endl;
			cout << "prostokat z gwiazdek o dlugosci a=" << a << " i wysokosci b=" << b << endl;
			for (L = 1; b >= L; L++)
			{
				for (k = 1; a >= k; k++)
				{
					cout << "*";
				}
				cout << endl;
			}
			cout << endl;

			cout << "obwod z gwiazdek o dlugosci a=" << a << " i wysokosci b=" << b << endl;
			for (L = 1; b >= L; L++)
			{
				for (k = 1; a >= k; k++)
				{
					if (k == 1 || k == a)
					{
						cout << "*";
					}
					else
					{
						if (L > 1 & L < b)
						{
							cout << " ";
						}
						else
						{
							cout << "*";
						}
					}
				}
				cout << endl;
			}

			cout << "trojkat prostokatny rownoramienny z przyprostokatna po lewej i na dole o dlugosci a=" << a << endl;

			for (L = 1;L <= a; L++)
			{
				for (k = 1; k <= a; k++)
				{
					if (k <= L)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			cout << endl;

			cout << "trojkat prostokatny rownoramienny odwrocony do poprzedniego o dlugosci przyp. a=" << a << endl;

			for (L = 1; L <= a; L++)
			{
				for (k = 1; k <= a; k++)
				{
					if (k < L)
					{
						cout << " ";
					}
					else
					{
						cout << "*";
					}
				}
				cout << endl;
			}
		}
	}

	cout << "Zadanie 2.3:" << endl;
	int mies;
	cout << "podaj liczbe od 1 - 12" << endl;
	cin >> mies;
	switch (mies)
	{
	case 1:
		cout << "styczen\n31dni\npochmurno\n";
		break;
	case 2:
		cout << "luty\n28dni\npochmurno";
		break;
	case 3:
		cout << "marzec\n31dni\npochmurno";
		break;
	case 4:
		cout << "kwiecien\n30dni\nslonecznie";
		break;
	case 5:
		cout << "maj\n31dni\nslonecznie";
		break;
	case 6:
		cout << "czerwiec\n30dni\nslonecznie";
		break;
	case 7:
		cout << "lipiec\n31dni\nslonecznie";
		break;
	case 8:
		cout << "sierpien\n31dni\nslonecznie";
		break;
	case 9:
		cout << "wrzesien\n30dni\nslonecznie";
		break;
	case 10:
		cout << "pazdziernik\n31dni\npochmurno";
		break;
	case 11:
		cout << "listopad\n30dni\npochmurno";
		break;
	case 12:
		cout << "grundzien\n31dni\npochmurno";
		break;
	default:
		cout << "liczba spoza zakresu, nie ma wiecej niz 12 miesiecy";
	}
	return 0;
}