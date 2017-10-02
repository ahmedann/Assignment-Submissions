// Read code below and try to identify any bug and then fix it. 
// Name: AHSAN JAVED (153196)

// Fix#1 Added iostream library and standard namespace
#include <iostream>
using namespace std;
int main()
{
	cout << "This program will crash"
		 << endl;

	int nSum;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0;
	while(true)
	{
		// enter another number to add
		int nValue;
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			cout << "Average is: "
				 << nSum/nNums
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
		nSum += nValue;
		// Fix#2 Increment nNums by 1 for the accumulator 
		nNums++;
	}

	cin.ignore(10000, '\n');
	return 0;
}


