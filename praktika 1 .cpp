#include "iostream"
#include "string"


using namespace std;

string RubliToString(int rub)
{
	if (((rub / 10) % 10) == 1)
	{
		return "рублей";
	}
	else
	{
		switch (rub % 10)
		{
			case 1:
				return "ðóáëü";
			case 2: 
			case 3:
			case 4:
				return "ðóáëÿ";
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				return "ðóáëåé";
		}
	}	
}

string KopeykiToString(int kop)
{
	if (((kop / 10) % 10) == 1)
	{
		return "êîïååê";
	}
	else
	{
		switch (kop % 10)
		{
		case 1:
			return "êîïåéêà";
		case 2:
		case 3:
		case 4:
			return "êîïåéêè";
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0:
			return "êîïååê";
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int TotalKopeyki;
	cout << "Ââåäèòå êîëè÷åñòâî êîïååê: ";
	cin >> TotalKopeyki;
	int rubli = TotalKopeyki / 100;
	int kopeyki = TotalKopeyki % 100;
	cout << "Âõîäíûå äàííûå: " << TotalKopeyki << endl;
	cout << "Âûõîäíûå äàííûå: " << rubli << ' ' << RubliToString(rubli) << ' ' << kopeyki << ' ' << KopeykiToString(kopeyki) << endl;
	system("pause");
	return 0;
}
