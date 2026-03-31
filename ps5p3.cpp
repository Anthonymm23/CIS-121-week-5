#include <iostream>
#include <string>
using namespace std;
int main()
{
	char job;
	double pay;
	double hours;
	double total;
	string lname;

	cout << "Enter employee last name: ";
	cin >> lname;
	cout << "Enter hours worked: ";
	cin >> hours;
	cout << "Enter job code (E, J, A): ";
	cin >> job;

	if (job == 'E' || job == 'e')
		pay = 25.00;
	else if (job == 'J' || job == 'j')
		pay = 20.00;
	else if (job == 'A' || job == 'a')
		pay = 15.00;
	else {
		cout << "Invalid job code entered." << endl;
		return 0;
	}
	
	total = pay * hours;

	cout << "Employee: " << lname << endl;
	cout << "Hours worked: " << hours << endl;
	cout << "Pay rate: $" << pay << endl;
	cout << "Total pay: $" << total << endl;

	return 0;
}