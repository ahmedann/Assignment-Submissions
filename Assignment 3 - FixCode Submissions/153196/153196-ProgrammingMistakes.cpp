 1: Undeclared Variables:
#include<iostream>
using namespace std;
int main()
{
int x; // Fix#1 Variable 'x' was not declared 
cin>>x;
cout<<x;
}

"Huh? Why do I get an error?"
 // ANSWER-1: Because variable 'x' was not declared. 

2: Uninitialized variables:
#include<iostream>
using namespace std;
int main()
{
int count=0; // count variable was not initialized 
while(count<100)
{
cout<<count;
count++;     // in order to terminate this loop, you need to increment the value of count variable 
}
}
"Why doesn't my program enter the while loop?"
// ANSWER-2: Because count varaible was not initialized. 
// And in order to terminate this program from infinite loop, count must be incremented inside the while loop.  

3: Setting a variable to an uninitialized value:
#include<iostream>
using namespace std;
int main()
{
int a, b;
int sum; // You cannot initialize sum variable to the value of uninitialized variables (a and b) 
cout<<"Enter two numbers to add: ";
cin>>a>>b; // Input to a variable was missing
sum=a+b;   // Now add a and b to sum variable
cout<<"The sum is: "<<sum;
}
When Run:
Enter two numbers to add: 1 3
The sum is: -1393

"What's wrong with my program?"
// ANSWER-3: Because you cannot initialize sum variable to the value of uninitialized variables (a and b).
// And input to a variable was missing.
4: Using a single equal sign to check equality:
#include<iostream>
using namespace std;
int main()
{
char x='Y';
while(x=='Y') // '==' operator is used to check equality
{
//...
cout<<"Continue? (Y/N)";
cin>>x;
}
}
"Why doesn't my loop ever end?"
// ANSWER-4: Beacuse you have used worng operator '=' for equality in the condition statement. 

5: Undeclared Functions:

int main()
{
menu();
}
void menu()
{
//...
}

"Why do I get an error about menu being unknown?"

6: Extra Semicolons:

for(int x=0; x<100; x++);
cout<<x;

"Why does it output 100?"

7: Overstepping array boundaries:

int array[10];
//...
for(int x=1; x<=10; x++)
cout<<array[x];

"Why doesn't it output the correct values?"


8: Integer division

For example:
double half = 1/2;

This code sets half to 0 not 0.5! Why? Because 1 and 2 are integer constants.


9: Variable Name Styles

Take a look at the below program. Can you see anything wrong?

#include <stdio.h>
#include <string.h>

main()
{
char CatName[20] = "fluffy";
char dogName[20] = "fido";
char rat_Name[20] = "fester";
int Catage = 3;
int dogs_age = 4;
int ratage = 1;
char myPet[20];
int itsAge;

strcpy(myPet,rat_Name);
itsAge = ratage;
printf("My pet is %s\n",myPet);
}

Besides the obviously bizarre choice of having a pet rat, do you notice anything? 


10 Misusing the && and || operators:

int value;
do
{
//...
value=10;
}while(!(value==10) || !(value==20))

"Huh? Even though value is 10 the program loops. Why?"

