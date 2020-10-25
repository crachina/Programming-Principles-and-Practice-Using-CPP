/* 
Write a program that converts spelled-out numbers such as "zero" and "two" into digits, such as 0 and 2. When the user inputs a number, the program should print out the corresponding digit. Do it for the values 0, 1, 2, 3 and 4 and write out not a number I known if the user enters something that doesn't correspond, such as stupid computer!
*/

#include <iostream>

using namespace std;

int main() {
	string value = " ";
	cout << "Please enter a number [0-4] such as 'zero' or 'two' [CTRL+C to exit]: ";

	while (cin >> value)
	{
		if (value == "zero") cout << "The value " << value << " in digit is 0\n";
		else
		if (value == "one") cout << "The value " << value << " in digit is 1\n";
		else
		if (value == "two") cout << "The value " << value << " in digit is 2\n";
		else
		if (value == "three") cout << "The value " << value << " in digit is 3\n";
		else
		if (value == "four") cout << "The value " << value << " in digit is 4\n";
		else cout << "Not a number I known !!!\n ";

		cout << "Please enter a number [0-4] such as 'zero' or 'two' [CTRL+C to exit]: ";
	}
}
