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
		cout << "Введите ваше число: " << endl;
		cin >> user_number;
		if (user_number == number)
		{
			cout << "Вы отгадали число! Браво! Вы отгадали число с " << i << " попытки" << endl;
			system("pause");
			return 0;
		}
		else			
		if (user_number > number)
			cout << "Меньше" << endl;
		else
			cout << "Больше" << endl;

	}
	cout << "Вы не отгадали число! Попробуйте в другой раз" << endl;
	cout << "Загаданное число: " << number << endl;
	system("pause");
	return 0;
}
