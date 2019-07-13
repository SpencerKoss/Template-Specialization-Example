//This simple program is desgined to show how 'Template Specializations' work. I show this by creating a template
//that can take any type of data, and I also override it by creating the same template, however with the
//specification that it will only take chars but can do something else if a char speciificaly is passed 
//in as the data type

#include "pch.h"
#include <iostream>
using namespace std;

//Can take any type of data
template <class T>
class Example {
public:
	Example(T x) {
		cout << x << " is not a character" << endl;
	}
};

//This class is created only to handle characters (A specialized template)
template <>
class Example<char> {
public:
	Example(char x) {
		cout << x << " is indeed a character" << endl;
	}
};
int main()
{
	//Explicitly specifies the data type
	Example<int> obj1(7);
	Example<double> obj2(7.15);
	Example<char> obj3('a');
}

/* Output:
7 is not a character
7.15 is not a character
a is indeed a character
*/
