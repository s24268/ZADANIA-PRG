#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std;


int main()
{
	cout << "zadanie 3.1" << endl << "wypisujac liczby po przecinku wyswietlamy wynik sumy, roznicy, iloczynu oraz ilorazu z dokladnoscia do 2 miejsc po przecinku" << endl;
	float x; float y;
	cout << "podaj liczbe x" << endl;
	cin >> x;
	cout << "podaj liczbe y" << endl;
	cin >> y;
	float roznica1 = x - y; float roznica2 = y - x;
	cout << setprecision(2) << fixed << "roznica liczb x i y: " << roznica1 << endl << "roznica liczb y i x: " << roznica2 << endl;
	float suma = x + y;
	cout << setprecision(2) << fixed << "suma liczb x i y: " << suma << endl;
	float iloczyn = x * y;
	cout << setprecision(2) << fixed << " iloczyn liczb x i y: " << iloczyn << endl;
	float iloraz1 = x / y; float iloraz2 = y / x;
	cout << setprecision(2) << fixed << "iloraz liczb x i y: " << iloraz1 << endl << "iloraz liczb y i x: " << iloraz2 << endl << endl;


	cout << "zadanie 3.3" << endl;
	//Je�eli Pani na to patrzy i to czyta to dlaczego mamy pobiera� do r�wnania kwadratowego liczby A B i C je�eli pobranie dw�ch liczb by wystarczy�o do rozwi�zania zadania? B jest zdefiniowane od A i C kt�rego pierwiastki wychodz� a i b kt�re kt�re po przemno�eniu ze sob� i przeno�eniu przez 2 daj� nam nasze B. Jedynie �e �le zrozumia�em zadanie to najmocniej przepraszam i wtedy prosze o dok�adniejsze definiowanie zada�

	cout << "(a+b)^2 = a^2 + 2*a*b + b^2:" << endl;
	float A;
	cout << "wprowadz liczbe A czyli wynik dzialania a^2" << endl;
	cin >> A;
	cout << "wprowadz liczbe B czyli wynik dzialania 2*a*b" << endl;
	float B;
	cin >> B;
	cout << "wprowadz liczbe C czyli wynik dzialania b^2" << endl;
	float C;
	cin >> C;
	float a = sqrt(A);
	float c = sqrt(C);
	float B1 = B / 2 / a / c;
	float b = 2 * a * c;
	if (B1 == b)
	{
		cout << "a = " << a << endl << "b = " << c << endl;
		float X = (a + c) * (a + c);
		cout << "(" << a << "+" << c << ")^2" << endl;
		cout << "wynik rownania kwadratowego dodatniego = " << X << endl;
	}
	else
	{
		cout << "Twoja warto�� B jest niepoprawana do r�wnania kwadratowego (komentarz pod zadaniem)" << endl;
	}
	cout << endl;

	return 0;
}