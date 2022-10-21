#include <iostream>
using namespace std;

int main() {
	cout << "WELCOME TO THE ARRAY CALCULATOR." << endl;
	const int indx = 5;
	int num[indx];
	for (int i = 0; i < indx; i++) {
		cout << "Enter the " << i + 1 << ". number: ";
		cin >> num[i];
		cout << endl;
	}	
	int sum = 0;
	//print the array
	for (int i = 0; i < indx; i++)
	{		
		cout << num[i];
		if (i != indx - 1) {
			cout << ", ";
		}
	}
	cout << endl;
	//Sum
	for (int i = 0; i < indx; i++)
	{
		sum += num[i];
	}
	cout << "The sum of all values: " << sum << endl;
	//Average
	cout << "The average of all values: " << sum / indx << endl;

	//Max
	int current = num[0];
	for (int i = 1; i < indx; i++)
	{
		if (current < num[i])
		{
			current = num[i];
		}
	}
	cout << "Max value: " << current << endl;
	//Min
	current = num[0];
	for (int i = 1; i < indx; i++)
	{
		if (current > num[i])
		{
			current = num[i];
		}
	}
	cout << "Min value: " << current << endl;

	//Even values
	cout << "Even values: ";
	for (int i = 0; i < indx; i++) {
		if (num[i] % 2 == 0) {
			cout << " " << num[i];
		}
	}
	cout << endl;
	//Odd values
	cout << "Odd values: ";
	for (int i = 0; i < indx; i++) {
		if (!(num[i] % 2 == 0)) {
			cout << " " << num[i];
		}
	}
	cout << endl;
	//Search by value.
	int th;
	cout << endl << "Search By Value: ";
	cin >> th;
	int found = -1;
	for (int i = 0; i < indx; i++) {
		if (th == num[i]) {
			found = i;
			break;
		}
	}
	if (found != -1) {
		cout << th << ", is the value at " << found << ". index." << endl;

	}
	else
	{
		cout << "Not found." << endl;
	}
	//Search by index number.
	int index;
	cout << endl << "Search By Index Number: ";
	cin >> index;
	for (int i = 0; i < indx; i++) {
		if (index == num[index]) {
			found = i;
			break;
		}
	}
	if (found != -1) {
		cout << num[index] << ", is the " << index << ". value." << endl;

	}
	else
	{
		cout << "Not found." << endl;
	}
	return 0;
}

