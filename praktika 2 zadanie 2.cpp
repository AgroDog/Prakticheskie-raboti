#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	int user_number;
	srand(time(NULL));
	number = rand() % 1000 +1;
	for (int i = 1; i <= 10; i++) 
	{
		cout << "������� ���� �����: " << endl;
		cin >> user_number;
		if (user_number == number)
		{
			cout << "�� �������� �����! �����! �� �������� ����� � " << i << " �������" << endl;
			system("pause");
			return 0;
		}
		else			
		if (user_number > number)
			cout << "������" << endl;
		else
			cout << "������" << endl;

	}
	cout << "�� �� �������� �����! ���������� � ������ ���" << endl;
	cout << "���������� �����: " << number << endl;
	system("pause");
	return 0;
}
