//*****************************************************************************
//	File:	Customer.cpp 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	customer class
//*****************************************************************************
#include <string>
#include <iostream>
#include "Customer.h"
#include "Address.h"
#include "Employee.h"

using namespace std;

Customer::Customer()
{
	cout << "Inside of Customer, within Customer()" << endl;
}
bool Customer::promptForCustomerInfo()
{
	cout << "Inside of Customer, within promptForCustomerInfo()" << endl;
}
std::string Customer::Customer::promptForPetType()
{
	cout << "Inside of Customer, within promptForPetType()" << endl;
}
void Customer::promptForCloseAccountReason()
{
	cout << "Inside of Customer, within promptForCloseAccountReason()" << endl;
}
bool Customer::setFirstName(std::string)
{
	cout << "Inside of Customer, within setFirstName()" << endl;
}
std::string Customer::getFirstname() const
{
	cout << "Inside of Customer, within getFirstname()" << endl;
}
bool Customer::setLastName(std::string)
{
	cout << "Inside of Customer, within setLastName()" << endl;
}
std::string Customer::getLastname() const
{
	cout << "Inside of Customer, within getLastname()" << endl;
}
bool Customer::setMiddleName(std::string)
{
	cout << "Inside of Customer, within setMiddleName()" << endl;
}
std::string Customer::getMiddlename() const
{
	cout << "Inside of Customer, within getMiddlename()" << endl;
}
bool Customer::setAddress(Address)
{
	cout << "Inside of Customer, within setAddress()" << endl;
}
Address Customer::getAddress() const
{
	cout << "Inside of Customer, within getAddress()" << endl;
}
bool Customer::setCustomerInfo()
{
	cout << "Inside of Customer, within setCustomerInfo()" << endl;
}
std::string Customer::promptForPetName()
{
	cout << "Inside of Customer, within promptForPetName()" << endl;
}
void Customer::editCustomer()
{
	cout << "Inside of Customer, within editCustomer()" << endl;
}
void Customer::newPatient()
{
	cout << "Inside of Customer, within newPatient()" << endl;
}
void Customer::editPatient()
{
	cout << "Inside of Customer, within editPatient()" << endl;
}
void Customer::newVisit(Employee)
{
	cout << "Inside of Customer, within newVisit()" << endl;
}
void Customer::newBill()
{
	cout << "Inside of Customer, within newBill()" << endl;
}
void Customer::newRFID()
{
	cout << "Inside of Customer, within newRFID()" << endl;
}
void Customer::newPayment()
{
	cout << "Inside of Customer, within newPayment()" << endl;
}


