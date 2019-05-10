// ClassesAndObjects.cpp : Defines the entry point for the console application.
//

#include "Person.h" // with #pragma once
#include "Tweeter.h"
#include "status.h"
#include <iostream>
using std::cout;
using std::endl;
// using namespace std; she doesn't like this due to it bringing too much in; never put in a header files
using std::string;

int main()
{
	Person p1("Kate", "Gregory", 123);
	{
		//Person p2;
		Tweeter t1("Someone", "Else", 456, "@whoever");
		std::string name2 = t1.GetName();
	}
	cout << "after innermost block" << endl;
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
	p1.SetNumber(124);
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;

	//int i = p1.arbitrarynumber;

	//Status s = Pending;
	//s = Approved;

	//FileError fe = FileError::notfound;
	//fe = FileError::ok;

	//NetworkError ne = NetworkError::disconnected;
	//ne = NetworkError::ok;




    return 0;
}

