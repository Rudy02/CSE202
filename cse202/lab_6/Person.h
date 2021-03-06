 
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std; 

class Person
{
public:
    Person();
    Person(string fname, string lname, string cname);
    string getFirstName();
    string getName();
    string getLastName();
    string getCompany();
private:
    string firstname;
    string lastname;
    string company; 
}; // Person
#endif

/*
Person::Person()
{
    firstname = "";
    lastname = "";
    company = "";
}
Person::Person(string fname, string lname, string cname)
{
    firstname = fname;
    lastname = lname;
    company = cname;
}
Person::getFirstName()
{
    return firstname;
}
Person::getName()
{
    return firstname, lastname;
}
Person::getLastName()
{
    return lastname;
}
Person::getCompany()
{
    return company;
}
*/

