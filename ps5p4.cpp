#include <iostream>
using namespace std;
int main()
{
	double salary, rate, amount;

	cout << "Enter annual salary: ";
	cin >> salary;

	if (salary >= 100000)
		rate = 0.40;
	else if (salary >= 50000)
		rate = 0.35;
	else
		rate = 0.25;

	amount = salary * rate;

	cout << "Salary: $" << salary << endl;
	cout << "Tax rate: " << rate * 100 << "%" << endl;
	cout << "Tax amount owed: $" << amount << endl;
	
	return 0;
}