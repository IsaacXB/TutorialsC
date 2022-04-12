#include <iostream>

using namespace std;

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
	system("pause");

}