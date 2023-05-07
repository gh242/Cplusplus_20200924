#include <iostream>
using namespace std;

int main()
{
	//int num1, num2; // 如果不給初始值，會有大大的問題
	int num1 = 0, num2 = 0;
	cout << "Please enter on number: ";
	cin >> num1;
	cout << "Please enter another number: ";
	cin >> num2;

	cout << "The sum is " << num1 + num2;
	return 0;
}
