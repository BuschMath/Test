// ******************************
// Name
// Output customer information program.
// ******************************

#include <iostream>
#include <string>

using namespace std;

// Outputs first name to standard output device.
void printFirstName();


void printLastName();

string firstName = "Joe";		// First name of our customer.
string lastName = "Doe";

int main()
{
	// Demo of using identifiers for output
	cout << firstName << firstName << firstName << firstName << firstName;


	// Outputting customer first and last name.
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
