#include <iostream>
using namespace std;
int main()
{
	double pounds, poundprice, total;

	cout << "Enter quantity in pounds: ";
	cin >> pounds;

	if (pounds > 100)
		poundprice = 0.10;
	else if (pounds >= 50)
		poundprice = 0.25;
	else
		poundprice = 0.50;

	total = pounds * poundprice;

	cout << "Price per pound: " << poundprice << endl;
	cout << "Total cost: $" << total << endl;

	return 0;
}