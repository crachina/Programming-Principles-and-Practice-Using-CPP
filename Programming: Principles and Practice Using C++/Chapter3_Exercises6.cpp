/* 
Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas. So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together. So, the input 4 5 4 should give 4,4,5.
*/

#include <iostream>

using namespace std;

int main() {

	int val1, val2, val3, change=0;
	cout << "Please enter three integer values: ";
	cin >> val1 >> val2 >> val3;
	if (val1 > val2)
	{
		change=val1;
		val1 = val2;
		val2 = change;
		change = 0;
	}
	if (val2 > val3)
	{
		change=val2;
		val2 = val3;
		val3 = change;
		change = 0;
	}
	if (val1 > val3)
	{
		change=val1;
		val1 = val3;
		val3 = change;
		change = 0;
	}
	if (val1 > val2)
	{
		change = val1;
		val1 = val2;
		val2 = change;
		change = 0;
	}
	
	cout << "The values is: " << val1 << ", " << val2 << ", " << val3<<'\n';
	
}
