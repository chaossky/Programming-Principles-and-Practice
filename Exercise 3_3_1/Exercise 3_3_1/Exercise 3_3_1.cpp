#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter you First Name and your Age: \n";
	string first_name = "null";
	double age = 0;
	cin >> first_name;
	cin >> age;
	cout << "Hello " << first_name << ", you are " << (12 * age) << " months old.\n";
	system("pause");
	return 0;
}