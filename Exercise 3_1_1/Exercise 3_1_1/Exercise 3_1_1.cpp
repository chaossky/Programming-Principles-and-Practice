#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter your first name (followed by 'enter'):\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";
	cout << "First Name"<< " is " << first_name << ".\n";
	system("pause");
	return 0;
}