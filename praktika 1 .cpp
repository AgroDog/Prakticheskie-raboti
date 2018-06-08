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
				return "рубль";
			case 2: 
			case 3:
			case 4:
				return "рубля";
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				return "рублей";
		}
	}	
}

string KopeykiToString(int kop)
{
	if (((kop / 10) % 10) == 1)
	{
		return "копеек";
	}
	else
	{
		switch (kop % 10)
		{
		case 1:
			return "копейка";
		case 2:
		case 3:
		case 4:
			return "копейки";
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0:
			return "копеек";
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int TotalKopeyki;
	cout << "Введите количество копеек: ";
	cin >> TotalKopeyki;
	int rubli = TotalKopeyki / 100;
	int kopeyki = TotalKopeyki % 100;
	cout << "Входные данные: " << TotalKopeyki << endl;
	cout << "Выходные данные: " << rubli << ' ' << RubliToString(rubli) << ' ' << kopeyki << ' ' << KopeykiToString(kopeyki) << endl;
	system("pause");
	return 0;
}
