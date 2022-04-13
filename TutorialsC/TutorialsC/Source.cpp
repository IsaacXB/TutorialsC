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

//basic overload function example, with 1 parameter of type char
void printString(char c)
{
	cout << c << endl;
}

//basic function that returns the sum of parameter 1 and parameter 2
int sum(int a, int b)
{
	return a + b;
}

// declare function prototypes
char getYesNo();
void askYesOrNoQuestion();
void nestedLoop3x();
void ifElseExample();
string fromIntToString(int value);

int main()
{
	//using namespace std, the :: is not longer required for that library functions such as cout and endl
	//std::cout << "You Died!\n";
	cout << "You Died!" << endl;

	//If Else Example
	ifElseExample();

	//call a function
	printString();

	//calls the overloaded function with a parameter
	printString("Overloaded");

	//calls a function that returns a value and assigns it to a local variable
	int result = sum(5, 10);

	//Function that converts an int to a string
	string convertedValue = fromIntToString(result);

	// print the value converted from int
	printString(convertedValue);

	// Call a function that calls another function inside
	askYesOrNoQuestion();

	//3x Nested Loop example
	nestedLoop3x();

	//Pause console to see results
	system("pause");



}

//prototype function implementation return char from input
char getYesNo() {

	printString("Please answer: y or n");

	char response;
	cin >> response;

	return response;
}

//Asks user to enter y or n and prints the response to screen
void askYesOrNoQuestion() {

	//call getYesNo function and assigned the returned value to response local variable
	char response = getYesNo();
	printString(response);
}

//Nested Loop for 3 iterations if 11 each, that prints each iteration value to screen
//Nested Loops takes some time to complete, it affects performance, run time, usually you avoid nested loops
void nestedLoop3x()
{
	int counter = 0;
	for (int i=0; i<= 10; i++)
	{
		//cout << "i = " << i << "Total iterations = " << counter << endl;
		//counter++;
		for (int j = 0; j <= 10; j++)
		{
			//cout << "i = " << i << ", j = " << j <<  "Total iterations = " << counter << endl;
			//counter++;
			for (int k = 0; k <= 10; k++)
			{
				cout << "i = " << i << ", j = " << j << ", k = " << k << "Total iterations = " << counter << endl;
				counter++;
			}
		}
	}
}

// If-else if-else example, only 1 set of code will run, after the first condition is met, the others will be ignored
void ifElseExample()
{
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
}

string fromIntToString(int value) {

	//create stringstream variable to extract and insert data from an int to an string
	stringstream ss;

	// the << mean extract, used to read data from int variable
	ss << value;

	//create a string to hold the converted value from int to a string
	string convertedValue;

	// the << symbol is used to insert the value to a string
	ss >> convertedValue;

	return convertedValue;
}
