#include <iostream>
#include <string>
using namespace std;
void razl(int n)
{
	string rezult, process = " = ";
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
			a += 2;
	}
}

int main()
{
	setlocale(0, "");
	unsigned int N;
	cout << "¬ведите N" << endl;
	cin >> N;
	razl(N);
	cout << endl;
	system("pause");
	return 0;
}


























