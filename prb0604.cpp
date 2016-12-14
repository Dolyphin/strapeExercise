//19. Write a program where you first enter a set of name¡¤and¡¤value pairs,
//such as Joe 17 and Barbara 22. For each pair, add the name to a veclor
//called names and the numbcr to a vector called scores(in corresponding
//positions, so that if names[7] == "Joe" then scores[7] == 18).l cnninate
//input by the line No more(" more" will make the attempt to read anotller
//integer fail).Check that each name is unique and terminate with an crror
//message if a name is entered twice.Write a u[all the(namc, score) pairs,
//one per line.

//4. Define a class Name_va lue that holds a smng and a value.Give it a constructor(a bit like Toke n).Rework exercise 19 in Chapter 4 to use a
//vector<Name_value> instead of two vecto rs.
#include "C:\Users\ivan\Documents\Visual Studio 2013\Projects\strapChater3\std_lib_facilities.h"
class Name_value
{
public:
	double value;
	string name;
	/*Name_value();
	~Name_value();*/
	Name_value(string ch, double val) :name(ch), value(val){};
private:
	string ch;
	double val;
};
void main0604()
{
	Name_value nv("hell", 12);
	cin >> nv.value >> nv.name;
	cout << nv.name;
}
//Name_value::Name_value()
//{
//}
//
//Name_value::~Name_value()
//{
//}