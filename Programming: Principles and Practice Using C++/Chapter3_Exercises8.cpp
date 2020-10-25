/* 
Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and complete. In other words, don't just output yes or no. Your output should stand alone, like The value 4 is an even number. Hint: See the remainder (modulo) operator.
*/

#include <iostream>

using namespace std;

int main() {
	int value = 0;
	cout << "Please enter a value [CTRL+C to Exit]: ";
	while (cin >> value)
	{
		if (value % 2 == 0)
			cout << "The value " << value << " is an even number\n";
		else
			cout << "The value " << value << " is an odd number\n";
		
		cout << "Please enter a value [CTRL+C to Exit]: ";
	}

}
