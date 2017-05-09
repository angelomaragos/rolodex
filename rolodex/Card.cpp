#include "stdafx.h"
#include "Card.h"
#include <string>
#include <iostream>
using namespace std;

Card::Card()
{
	this->fName = "firstName";
	this->lName = "lastName";
	this->address = "address";
	this->phone = "phone";
	this->occupation = "occupation";
	// cout<<"constructor called for Card"<<endl;
}

Card::~Card()
{

	// cout<<"destructor called for a card"<<endl;
}

string Card::get_fName()
{
	return this->fName;
}

void Card::set_fName(string firstName)
{
	this->fName = firstName;
}

string Card::get_lName()
{
	return this->lName;
}

void Card::set_lName(string lastName)
{
	this->lName = lastName;
}

string Card::getAddress()
{
	return this->address;
}

void Card::setAddress(string address)
{
	this->address = address;
}

string Card::getPhone()
{
	return this->phone;
}

void Card::setPhone(string phone)
{
	this->phone = phone;
}

string Card::goccupation()
{
	return this->occupation;
}

void Card::soccupation(string occupation)
{
	this->occupation = occupation;
}

void Card::show()
{
	cout << "Card Contact: " << endl;
	cout << "      Fisrt name: " << this->get_fName() << endl;
	cout << "       Last name: " << this->get_lName() << endl;
	cout << "         Address: " << this->getAddress() << endl;
	cout << "    Phone number: " << this->getPhone() << endl;
	cout << "Type of business: " << this->goccupation() << endl;
	cout << endl;
}