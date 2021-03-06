#pragma once // not technically a standard but all support it; allows for stuff not being re-included
#include <string>
// explicitly define the types due to someone wanting to bring in your header
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
	
public:
	Person(std::string first, std::string last, int arbitrary);
	//Person() = default; // default keyword can also be used for other constructors
	Person();
	~Person();
	std::string GetName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
};

