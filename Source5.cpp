#include<iostream>
#include<string>
using namespace std;

int main() {
	const string
		number[10] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" },
		special[20] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	int x;
	cout << "Input the three-digit number: ";
	cin >> x;
	cout << special[x / 100] << (x / 100 > 0 ? " hundred " : "") << (x / 100 > 0 && x % 100 > 0 ? "and " : "") << (x % 100 < 20 ? special[x % 100] : number[(x % 100) / 10] + (x % 10 > 0 ? "-" : "") + special[x % 10]);
	if (x == 0)
		cout << "zero";
	cout << endl;
	system("pause");
	return 0;
}