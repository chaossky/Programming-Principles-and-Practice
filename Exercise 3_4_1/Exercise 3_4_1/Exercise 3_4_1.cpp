#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter a floating-point value: ";
	int n = 0;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\nremainder of n / 3 == " << n % 3
		<< "\ntwice n ==" << n + n
		<< "\nn squared == " << n*n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(double(n))
		<< endl
		<< endl;
	system("pause");
	return 0;
}