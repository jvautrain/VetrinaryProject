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

int Customer::numCustomers = 0;

Customer::Customer()
{
	customerID = ++numCustomers;
	cout << "Inside of Customer, within Customer()" << endl;
}
bool Customer::promptForCustomerInfo()
{
	string tempString;
	Address newCustAddress;
	cout << "Inside of Customer, within promptForCustomerInfo()" << endl;
	cout << "Please enter a first name: ";
	cin >> tempString;
	setFirstName(tempString);
	cout << "Please enter a middle name: ";
	cin >> tempString;
	setMiddleName(tempString);
	cout << "Please enter a last name: ";
	cin >> tempString;
	setLastName(tempString);
	cout << "Please enter address line 1: ";
	cin >> tempString;
	addr.addressLine1 = tempString;
	cout << "Please enter address line 2: ";
	cin >> tempString;
	addr.addressLine2 = tempString;
	cout << "Please enter the city: ";
	cin >> tempString;
	addr.city = tempString;
	cout << "Please enter the state: ";
	cin >> tempString;
	addr.state = tempString;
	cout << "Please enter the zip code: ";
	cin >> tempString;
	addr.zip = tempString;
	setAddress(newCustAddress);

}
std::string Customer::promptForPetType()
{
	cout << "Inside of Customer, within promptForPetType()" << endl;
	return "";
}
void Customer::promptForCloseAccountReason()
{
	cout << "Inside of Customer, within promptForCloseAccountReason()" << endl;
}
bool Customer::setFirstName(string _firstName)
{
	bool success = (_firstName != ""); 
	firstName = _firstName;
	return success;
}
std::string Customer::getFirstname() const
{
	cout << "Inside of Customer, within getFirstname()" << endl;
}
bool Customer::setLastName(string _lastName)
{
	bool success = (_lastName != ""); 
	lastName = _lastName;
	return success;
}
std::string Customer::getLastname() const
{
	cout << "Inside of Customer, within getLastname()" << endl;
}
bool Customer::setMiddleName(string _middleName)
{
	bool success = (_middleName != ""); 
	middleName = _middleName;
	return success;
}
std::string Customer::getMiddlename() const
{
	cout << "Inside of Customer, within getMiddlename()" << endl;
}
bool Customer::setAddress(Address _address)
{
	addr = _address;
}
Address Customer::getAddress() const
{
	cout << "Inside of Customer, within getAddress()" << endl;
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


