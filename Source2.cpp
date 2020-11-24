#include <iostream>
using namespace std;

int Fibon(int n)
{
	if (n <= 2)
		return 1;
	return Fibon(n - 1) + Fibon(n - 2);
}


int main()
{
	int n;
	cout << "Enter the term: ";
	cin >> n;

	cout << Fibon(n) << endl;
	system("pause");
	return 0;
}