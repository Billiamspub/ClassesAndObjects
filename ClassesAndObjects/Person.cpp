#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
// using namespace std; she doesn't like this due to it bringing too much in; never put in a header files
using std::string;


Person::Person(std::string first, std::string last, int arbitrary)
	:
	firstname(first),
	lastname(last),
	arbitrarynumber(arbitrary)
{
	cout << "constructing " <<
		GetName() << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "constructing " <<
		GetName() << endl;

}

Person::~Person()
{
	cout << "destructing " << GetName() << endl;

}

std::string Person::GetName() const 
{
	return firstname + " " + lastname;
}
