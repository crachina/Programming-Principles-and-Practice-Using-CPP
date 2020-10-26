/* 
Write a program that takes an operation followed by two operands and output the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation and use an it-statement to figure out which operation the user wants, for example, if (operation=="+"). Read the operands into variable of type double. Implement this for operations called +, -, *, /, plus, minus, mul, and div with their obvious meanings.
*/

#include <iostream>

using namespace std;


int main()
{
	string operation;
	double operand_1, operand_2;

	cout << "Please enter the operation [+ or - or * or /] followed by two operand: ";
	cin >> operation >> operand_1 >> operand_2;

	if (operation == "+") cout << operand_1 << operation << operand_2 << "=" << operand_1 + operand_2; else
		if (operation == "-") cout << operand_1 << operation << operand_2 << "=" << operand_1 - operand_2; else
			if (operation == "*") cout << operand_1 << operation << operand_2 << "=" << operand_1 * operand_2; else
				if (operation == "/") cout << operand_1 << operation << operand_2 << "=" << operand_1 / operand_2; else
					cout << "Operation not suported!!!";
}
