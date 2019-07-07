#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int smallest = 0;
	int largest = 0;
	int numbers[15];
	double sum = 0;
	
	for (int i = 0; i < 15; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];

		smallest = numbers[0];
		largest = numbers[0];

		if (smallest >= numbers[i])
		smallest = numbers[i];

		if (largest <= numbers[i])
		largest = numbers[i];
	}
 
	for (int i = 0; i < 15; i++)
	{
		sum += numbers[i];
	}

	cout << "\nThe smallest value: " << smallest << endl;
	cout << "The largest value: " << largest << endl;
	cout << "The sum of the values are: "<< sum << endl;
	cout << "The mean of the values are: "<< sum/15 << endl;
	
	getch ();
	return 0;
	
}
