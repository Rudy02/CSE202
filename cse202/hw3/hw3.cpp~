/*Rodolfo Diaz
  homework 3 */



#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Person
{
	public:
	Person(string name, string address, string telephone, string email);
	string getName();
	string getAddress();
	string getTelephone();
	string getEmail();
	virtual string whoami();
	
	
	private:
	string name;
	string address;
	string telephone;
	string email;
};

Person::Person(string name, string address, string telephone, string email)
	{
		this->name = name;
		this->address = address;
		this->telephone = telephone;
		this->email = email;
	}
	string Person::getName()
	{
		return name; 
	}
	string Person::getAddress()
	{
		return address;
	}
	string Person::getTelephone()
	{
		return telephone;
	}
	string Person::getEmail()
	{
		return email;
	}
	string Person::whoami()
	{
		return "Person";
	}
class Student: virtual public Person
{
	public:
	 Student(string name, string address, string telephone, string email, string status);
	string getStatus();
	string whoami();
	//void reset(string name, string address, string telephone, string email, string status);

	private:
	string status;
};

Student::Student(string name, string address, string telephone, string email, string status):Person(name, address, telephone, email)
	{
		this->status = status;
		
	}
string Student::getStatus()
	{
		return status;
	}
string Student::whoami()
{
	return "Student";
}


class Employee:  virtual public Person
{
	public:
	Employee(string name, string address, string telephone, string email, string office, double salary);
	string getOffice();
	double getSalary();
	string whoami();
	
	private:
	string office;
	double salary;
};

Employee::Employee(string name, string address, string telephone, string email, string office, double salary):Person(name, address, telephone, email)
	{
		this->office = office;
		this->salary = salary;
	}
	string Employee::getOffice()
	{
		return office;
	}
	double Employee::getSalary()
	{
		return salary;
	}
	string Employee::whoami()
	{
		return "Employee";
	}


class Faculty: public Employee
{
	public:
	Faculty(string name, string address, string telephone, string email, string office, double salary, string rank, string status);
		
	string getRank();
	string getStatus();
	string whoami();

	private:
	string rank;
	string status;
};

Faculty::Faculty(string name, string address, string telephone, string email, string office, double salary, string rank, string status):Person(name, address, telephone, email), Employee(name,  address, telephone, email, office, salary)
	{
		this->rank = rank;
		this->status = status;
	}
	string Faculty::getRank()
	{
		return rank;
	}
	string Faculty::getStatus()
	{
		return status;	
	}
	string Faculty::whoami()
	{
		return "Faculty";
	}

class Staff: public virtual Employee
{
	public:
	Staff(string name, string address, string telephone, string email, string office, double salary, string position);
	string getPosition();
	string whoami();
	private:
	string position;
};

Staff::Staff(string name, string address, string telephone, string email, string office, double salary, string position):Person(name, address, telephone, email), Employee(name, address, telephone, email, office, salary)
	{
		this->position = position;
	}
	string Staff::getPosition()
	{
		return position; 
	}
	string Staff::whoami()
	{
		return "Staff";
	}

	class StaffST: public virtual Staff, public virtual Student
	{
	public:
		StaffST(string name, string address, string telephone, string email, string office, double salary, string position, string status, int credithours);
		int getcredithours();
		string whoami();
	private:
		int credithours;
	};

	StaffST::StaffST(string name, string address, string telephone, string email, string office, double salary, string position, string status, int credithours) :Person(name, address, telephone, email), Employee(name, address, telephone, email, office, salary), Staff(name, address, telephone, email, office, salary, position), Student(name, address, telephone, email, status)
	{
		this->credithours = credithours;
	}
	int StaffST::getcredithours()
	{
		return credithours;
	}
	string StaffST::whoami()
	{
		return "StaffST";
	}

	string Classify(Person *ptr)
	{
		return ptr->whoami();
	}
	int main()
	{

		vector<Person*> v;
		v.push_back(new Person("John Adams", "Boston", "617-555-0000", "john@adams.com"));
		v.push_back(new Student("John Quincy Adams", "Boston", "617-555-0000", "johnq@adams.com", "senior"));
		v.push_back(new Staff("Samuel Adams", "Boston", "617-555-BEER", "sam@adams.com", "brewhouse 1", 1000, "Brewer"));
		v.push_back(new Faculty("George Washington", "Boston", "555-555-5555", "Geroge@washington.com", "brewhouse 3", 10000, "CEO", "tenure"));
		v.push_back(new StaffST("Samuel Smith", "Boston", "617-555-BEER", "samsmith@adams.com", "brewhouse 5", 20000, "Taster", "junior", 100));

		for (int i = 0; i<v.size(); i++)
		{
			cout << v[i]->getName() << "  " << Classify(v[i]) << endl;
		}
		system("PAUSE");
		return 0;
	}



