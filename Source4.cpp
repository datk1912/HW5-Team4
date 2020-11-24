#include<iostream>
using namespace std;

int value(int row, int column, int n)
{
	if (row == 0)
	{
		if (column == n - 1)
			return 1;
		else
			return 0;
	}
	else
		return value(row - 1, column - 1, n) + value(row - 1, column + 1, n);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j<2 * n - 1; j++)
		{
			if (value(i, j, n) == 0)
				cout << " ";
			else
				cout << value(i, j, n);
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}