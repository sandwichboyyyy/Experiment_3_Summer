#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int i, j, n, temp;
	char arr[30];
	cout << "Enter the number of characters to be sorted: " << flush;
	cin >> n;
	
	for (i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	cout << endl << endl;
	
	cout << "The array elements after sorting is: ";
	for (i=n;i>-1;i--)
	{
		cout << arr[i];
	}
	
	cout << "\n\nThe size of the array is: " << n;
	
	getch();
	return 0;
	
	
}
