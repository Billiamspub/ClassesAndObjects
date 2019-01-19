#include <string>
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
	std::string getName();
};

