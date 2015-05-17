#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter a string, int, char, double, string: ";
	string text;
	int num;
	char letter;
	double decimal;
	string moreText;

	cin >> text;
	cin >> num;
	cin >> letter;
	cin >> decimal;
	cin >> moreText;

	cout << text << " " << num << " " << letter << " " << decimal << " " << moreText << "\n";
	system("pause");
	return 0;
}