#include <iostream>
#include <string>
#include "Person.h"
#include "Employee.h"
#include "Admin.h"
#include "Customer.h"
#include "Validation.h"
#include <list>

using namespace std;

int main()
{
    Customer c1 (10023 , "ahmed mohamed",6000);

    c1.deposit(3000);


    return 0;
}
