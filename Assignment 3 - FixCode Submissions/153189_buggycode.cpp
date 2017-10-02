#include <iostream> 
#include<stdio.h>
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
       InputCheckpoint:
 		cout << "Enter another number:";
 		cin >> nValue;
 		cout << endl;
   
   // Fix#3 Input validation 
		if(cin.fail() || cin.get()!='\n')
		{
			cin.clear();
			cin.ignore(999999, '\n');
			cout << "You have entered invalid number"<<endl;
			goto InputCheckpoint;
		}
 
 		// if the input number is negative...
 		if(nValue < 0)
 		{
			//Fix # 4   Type Casing
 		// ... then output the average
 			cout << "Average is: "
 				 << (nSum)/nNums
 				 << endl;
 			break;
 		}
 
 		// not negative, add the value to
 		// the accumulator
 		nSum += nValue;
		//Icrementing nsum variable
		nNums++;
 	}

 	cin.ignore(10000, '\n');
 	return 0;
 }
