#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter you first name (followed by 'enter'):\n";
	string first_name;
	cin >> first_name;
	cout << "Hello " << first_name << "!\n";

	system("Pause");
	return 0;
}