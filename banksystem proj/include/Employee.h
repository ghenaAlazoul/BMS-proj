#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "Person.h"
#include "Admin.h"
#include "Customer.h"
#include <list>
using namespace std;
class Employee:public Person
{
    protected:

    public:
        Employee();
        virtual ~Employee();

void setID(int id ) {

		this ->ID = id;
}

	void setName(string n) {


		this ->name =n ;
	}
	void setPassword(string pw) {

		this -> Password=pw ;
	}
	void setBalance(double b) {

		this ->Balance = b;
	}



};


#endif // EMPLOYEE_H
