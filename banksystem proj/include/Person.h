#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include<list>

#include "Employee.h"
#include "Customer.h"
#include "Validation.h"

class Person
{
protected:
	int ID;
	string name;
	string Password;



public :

	Person() {
		this->ID = 0;
}
	Person(int id , string n , string pw) :ID (id) , name(n) , Password(pw)  {


	}

	int getID() {

		return ID;
	}
	string getName() {

		return name;

	}
	string getPassword() {

		return Password;
	}


	void DisplayInfo() {

};


#endif // PERSON_H
