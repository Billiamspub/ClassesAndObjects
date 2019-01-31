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
		getName() << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "constructing " <<
		firstname << " " << lastname << endl;

}

Person::~Person()
{
	cout << "destructing " <<
		firstname << " " << lastname << endl;

}

std::string Person::getName() {
	return firstname + " " + lastname;
}
