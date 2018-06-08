#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int n;
	cout << "¬ведите n" << endl;
	cin >> n;
	int a = 2;
	cout << n << " = ";
	while (n > 1)
	{
		while (n % a == 0)
		{
			if (n == a)
				cout << a;
			else
				cout << a << " * ";
			n = n / a;
		}
		if (a == 2)
			a++;
		else
			a = a + 2;
	}
	cout << endl;
	system("pause");
	return 0;
}


























