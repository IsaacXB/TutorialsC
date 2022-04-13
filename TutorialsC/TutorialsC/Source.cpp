// library for printing text to console
#include <iostream>
// library to perform input/output operations to string streams
#include <sstream>

using namespace std;

//basic function example
void printString()
{
	cout << "Welcome" << endl;
}

//basic overload function example, with 1 parameter of type string
void printString(string s)
{
	cout << s << endl;
}

//basic function that returns the sum of parameter 1 and parameter 2
int sum(int a, int b)
{
	return a + b;
}

int main()
{
	//using namespace std, the :: is not longer required for that library functions such as cout and endl
	//std::cout << "You Died!\n";
	cout << "You Died!" << endl;

	int a = 1;
	int b = 2;
	
	if (a < b)
	{
		cout << "a is less than b" << endl;
	}
	else if (a == b)
	{
		cout << "a is equal to b" << endl;
	}
	else
	{
		cout << "b is less than a" << endl;
	}

	//call a function
	printString();

	//calls the overloaded function with a parameter
	printString("Overloaded");

	//calls a function that returns a value and assigns it to a local variable
	int result = sum(5,10);

	//create stringstream variable to extract and insert data from an int to an string
	stringstream ss;

	// the << mean extract, used to read data from int variable
	ss << result;

	//create a string to hold the converted value from int to a string
	string addedValue;

	// the << symbol is used to insert the value to a string
	ss >> addedValue;

	// print the value converted from int
	printString(addedValue);

	//Pause console to see results
	system("pause");



}