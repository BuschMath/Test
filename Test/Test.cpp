// ******************************
// Name
// Output customer information program.
// ******************************

#include <iostream>
#include <string>

using namespace std;

void printFirstName();
void printLastName();

string firstName = "Joe";
string lastName = "Doe";

int main()
{
	cout << firstName << firstName << firstName << firstName << firstName;


	cout << "Name: ";
	printFirstName();
	cout << " ";
	printLastName();

	return 0;
}

void printFirstName()
{
	cout << firstName;
}

void printLastName()
{
	cout << lastName;
}
