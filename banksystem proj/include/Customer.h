#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include "Person.h"
#include "Employee.h"
#include <list>
using namespace std;

class Customer : public Person

{


     private:

    	double Balance;


    public:
        Customer(){

        }
        Customer (int id , string name  , double balance =1500 ): Balance(balance),Person (id ,name ){

        }

        Customer (int id , string name,string pw  , double balance =1500 ): Balance(balance),Person (id ,name , pw){

        }

void setName (string n){
if (n.length()>=5 && n.length()<=20){

    this ->name =n;

    }else{

    cout << "Name must be between 5 and 20 characters.\n";
    }
}
void setPassword (string pw){
if (pw.length()>=8 && pw.length()<=20){

    this ->Password =pw;

    }else{

    cout << "Password must be between 5 and 20 characters.\n";
    }
}

void deposit (double amount){
Balance +=amount;

cout << "Your request (Deposit )is successfully done \n with amount "<< amount <<" The account new available balance is :" << Balance << endl ;


}

void withdraw (double amount ){
    if (amount <= Balance){
Balance -=amount ;
cout << "Your request (Withdrawal )is successfully done \n with amount "<< amount <<" The account new available balance is :" << Balance << endl ;
}
else{
    cout << "Your request excessed the available balance ." << endl ;
    }

}
void TransferTo (double amount , Customer& recipient){

if (amount <= Balance){
   Balance-=amount ;
  recipient. deposit (amount)  ;
  cout << "Transfer successfully processed to \n"<< recipient.getName()<< "with amount :" << amount <<
  " The account new available balance is :" << Balance << endl ;
}

else {

    cout << "Insufficient balance to transfer please check again .\n";
}



}
void CheckBalance (){

cout << "Account available balance is: "<< Balance << endl;

}
void DisplayInfo(){

cout << "Account display details :\n";
cout << "Name :" << name << endl;
cout << "ID  :" << ID << endl;
cout << "Balance :" << Balance << endl;

}
};


#endif // CUSTOMER_H
