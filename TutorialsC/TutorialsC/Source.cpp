// library for printing text to console
#include <iostream>
// library to perform input/output operations to string streams
#include <sstream>
// string library
#include <string>
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

//basic overload function example, with 1 parameter of type char
void printString(float f)
{
	cout << f << endl;
}

//basic overload function example, with 1 parameter of type int
void printString(int i)
{
	cout << i << endl;
}

//basic overload function example, with 1 parameter of type int
void printString(string s,int i)
{
	cout << s << i << endl;
}

//basic function that returns the sum of parameter 1 and parameter 2
int sum(int a, int b)
{
	return a + b;
}
//enumerators, it's great for handling states

enum PlayerStatus
{
	psCrouched,
	psWalking,
	psRunning
};

enum MovementStatus
{
	msCrouched,
	msRunning
};

struct Character
{
	//constructor
	Character();
	// destructor - will be called when deleting objects
	~Character();
	string Name;
	float Health;
};

// declare function prototypes
char getYesNo();
void askYesOrNoQuestion();
void nestedLoop3x();
void ifElseExample();
string fromIntToString(int value);
void UpdateMovementSpeed(PlayerStatus playerStatus, float& movementSpeed);
void pointerExample();




//constants
const float runSpeed = 800.0f;
const float WalkSpeed = 500.0f;
const float CrouchSpeed = 350.0f;

//basic structure of my character
struct LocationVector
{
	float x;
	float y;
	float z;
};

struct Player {
	string name;
	float health;
	int level;
	float damage;
	LocationVector location = {0.0f,0.0f,0.0f };
	void TakeDamage(float damage)
	{
		health -= damage;
	}
	void DisplayLocation()
	{
		cout << "X = " << location.x << ", Y = " << location.y << ", Z = " << location.z << endl;
	}
};

//basic class example
class Dog
{
//accessible from outside the class
public:
	//Constructor
	Dog();
	//De constructor
	~Dog();
	//class body
	string name;
	int age;
	void Bark();

//only accessible from inside the class scope
private:

};
//Constructor Declaration
Dog::Dog()
{
	name = "default";
	age = 1;
	Bark();
}
//function implementation
void Dog::Bark()
{
	printString("Woof!");
}
//Destructor declaration
Dog::~Dog()
{
}


//Inheritance example - Parent Class
class Animal
{
public:
	//This constructor will always be called when creating child objects
	//Parent constructor with no parameters will be called by default
	Animal();
	//Constructor overload with parameters
	Animal(string name, int age, int numberOfLimbs);
	string Name;
	int Age;
	int NumberOfLimbs;
	void Report();
private:
};

//Inheritance example - Child Class
class Cat : public Animal
{
public:
	Cat();
	Cat(string name, int age, int numberOfLimbs);
	void Speak();
	~Cat();

private:

};



// class example with private and protected properties
class Creature
{
	// visible outside the class scope
public:
	Creature();
	~Creature();
	void SetName(string name);
	string GetName();
	void TakeDamage(float damage);
	float GetHealth();
	//visible inside the class scope only
private:
	string Name;
	float Health;
	//visible to inside the class scope and derived classes only
protected:
	int NumberOfLimbs;
};

//derived class from creature
class Goblin : public Creature {
public:
	Goblin();

};

Goblin::Goblin() {
	//protected properties from are accessible 
	NumberOfLimbs = 5;
	//Private properties from parent are unaccessible
	//Name = "unaccessible";
	printString("Derived class Goblin has been created!");
}

int main()
{
	//using namespace std, the :: is not longer required for that library functions such as cout and endl
	//std::cout << "You Died!\n";
	//cout << "You Died!" << endl;

	////If Else Example
	//ifElseExample();

	////call a function
	//printString();

	////calls the overloaded function with a parameter
	//printString("Overloaded");

	////calls a function that returns a value and assigns it to a local variable
	//int result = sum(5, 10);

	////Function that converts an int to a string
	//string convertedValue = fromIntToString(result);

	//// print the value converted from int
	//printString(convertedValue);

	//// Call a function that calls another function inside
	//askYesOrNoQuestion();

	////3x Nested Loop example
	//nestedLoop3x();

	////Create an instance of player status enum
	//PlayerStatus playerStatus = psWalking;
	//float movementSpeed;
	//UpdateMovementSpeed(playerStatus, movementSpeed);
	//printString(movementSpeed);

	//Player player;
	//player.name = "Isaac";
	//player.health = 100.0f;
	//player.level = 1;
	//player.damage = 20.0f;

	//printString(player.name);
	//printString(player.health);
	//player.TakeDamage(25);
	//printString("Player takes damage");
	//printString(player.health);
	//player.DisplayLocation();

	////pointerExample();
	////class example - create instance
	//Animal animal;
	////class example with overload - create instance with parameters
	//Animal animal2( "Koki", 8, 4 );
	//// child class instance from Animal
	//Cat cat;
	//// child class with parameters will use the overloaded constructor
	//Cat cat2("Mile", 6, 4);
	
	// create a creature instance, set a name get the name, using the public setter and getter functions
	// private properties are inaccessible directly from outside the class scope

	//Creature creature;
	//creature.SetName("Zombie");
	//printString(creature.GetName());
	//creature.TakeDamage(100.0f);
	//creature.GetHealth();
	//// create instance class from derived creature class
	//Goblin goblin;

	//Stack Memory and Heap Memory
	//Dynamically create an object that will be handled in the heap memory
	//the pointer will be created in the stack, but it will be referenced to the memory address of the variable in the heap memory
	Character* ptrToCharacter = new Character();
	//dereference allows to access properties and functions, use ->
	printString(ptrToCharacter->Name);

	//When you create objects dynamically, you will need to delete it from the heap memory
	//Otherwise it will create a memory leak
	delete ptrToCharacter;

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

//Updates player movement speed, using the switch case (more efficient than if-else)
void UpdateMovementSpeed(PlayerStatus playerStatus, float& movementSpeed)
{
	
	switch (playerStatus)
	{
	case psCrouched: movementSpeed = CrouchSpeed;
		break;
	case psWalking: movementSpeed = WalkSpeed;
		break;
	case psRunning: movementSpeed = runSpeed;
		break;
	default: movementSpeed = 0;
		break;
	}
}

//function to create a pointer, assign the address of the variable we want to point to
void pointerExample() {

	int a = 100;
	// the * after the variable type, declares a pointer
	int* aPtr;
	// a pointer needs the reference address of a variable
	aPtr = &a;
	// if you don't use the * before accesing the pointer, you will get the address
	cout << "Pointer address= " << aPtr << endl;
	// if you dereference the pointer by using the *, you will get the value
	cout << "Pointer Value = " << *aPtr << endl;

}

Cat::Cat()
{
	printString("Cat is created");
}

// this declaration will avoid the default constructor from parent class
Cat::Cat(string name, int age, int numberOfLimbs)
	: Animal(name, age, numberOfLimbs)
{
	Speak();
	Report();
}

// this declaration will call the default constructor from parent class, plus the overloaded constructor
//Cat::Cat(string name, int age, int numberOfLimbs)
//{
//	Animal(name, age, numberOfLimbs);
//	Speak();
//}

void Cat::Speak()
{
	printString("Miauu!");
}

Cat::~Cat()
{
}

Animal::Animal()
{
	Name = "Default";
	Age = 1;
	NumberOfLimbs = 4;
	printString("An animal is born");
	Report();
}

Animal::Animal(string name, int age, int numberOfLimbs):
	Name(name), Age(age), NumberOfLimbs(numberOfLimbs)
{
	//Name = name;
	//Age = age;
	//NumberOfLimbs = numberOfLimbs;
	printString("An animal is born");
	Report();
}

void Animal::Report() {
	printString("Name = "+Name);
	printString("Age = ",Age);
	printString("Number of Limbs= ", NumberOfLimbs);
}


Creature::Creature()
{
	printString("A creature has been created!");
	Name = "Default";
	Health = 100.0f;
	NumberOfLimbs = 4;
}

Creature::~Creature()
{
}


void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

void Creature::TakeDamage(float damage)
{
	Health -= damage;
	if (Health <= 0)
	{
		printString("The creature has died!");
		//Call Destructor
		this->~Creature();
	}
}

float Creature::GetHealth()
{
	return Health;
}

Character::Character()
{
	Name = "Default";
	Health = 100.0f;
	printString("Character has been created!");
}

Character::~Character()
{
	printString("Character deleted from heap memory!");
}
