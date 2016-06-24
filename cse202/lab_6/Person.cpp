#include "Person.h"
#include <string>

using namespace std;

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
Person::getFirstName(firstname)
{
    return firstname;
}
Person::getName(firstname, lastname)
{
    return firstname, lastname;
}
Person::getLastName(lastname)
{
    return lastname;
}
Person::getCompany(company)
{
    return company;
}

