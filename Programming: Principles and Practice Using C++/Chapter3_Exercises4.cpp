/* 
Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report then to the use
*/

#include <iostream>

using namespace std;

int main() {
	int val1, val2;
	cout << "Please enter two integer values: ";
	cin >> val1 >> val2;
	cout << '\n';

	//determine the smaller
	if (val1 < val2) cout << "The smaller value is: " << val1 << '\n';
	if (val2 < val1) cout << "The smaller value is: " << val2 << '\n';
	if (val1 == val2) cout << "The values is the same\n";

	//determine the larger
	if (val1 > val2) cout << "The larger value is: " << val1 << '\n';
	if (val2 > val1) cout << "The larger value is: " << val2 << '\n';

	//determine the sum
	cout << "The sum of these values is: " << val1 + val2 << '\n';

	//determine the difference
	cout << "The difference is: " << val1 - val2 << '\n';

	//determine the product
	cout << "The product is:" << val1 * val2 << '\n';

	//determine the ratio
	cout << "The ratio is:" << val1 / val2 << '\n';
}
