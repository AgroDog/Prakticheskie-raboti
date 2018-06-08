#include "iostream"
#include "string"


using namespace std;

string RubliToString(int rub)
{
	if (((rub / 10) % 10) == 1)
	{
		return "������";
	}
	else
	{
		switch (rub % 10)
		{
			case 1:
				return "�����";
			case 2: 
			case 3:
			case 4:
				return "�����";
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
				return "������";
		}
	}	
}

string KopeykiToString(int kop)
{
	if (((kop / 10) % 10) == 1)
	{
		return "������";
	}
	else
	{
		switch (kop % 10)
		{
		case 1:
			return "�������";
		case 2:
		case 3:
		case 4:
			return "�������";
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0:
			return "������";
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int TotalKopeyki;
	cout << "������� ���������� ������: ";
	cin >> TotalKopeyki;
	int rubli = TotalKopeyki / 100;
	int kopeyki = TotalKopeyki % 100;
	cout << "������� ������: " << TotalKopeyki << endl;
	cout << "�������� ������: " << rubli << ' ' << RubliToString(rubli) << ' ' << kopeyki << ' ' << KopeykiToString(kopeyki) << endl;
	system("pause");
	return 0;
}