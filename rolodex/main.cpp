// Rolodex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Card.h"
#include "Rolodex.h"
using namespace std;

Rolodex roloObj;

void list()
{
	roloObj.show();
}

void view()
{	
	Card card = roloObj.getCurrentCard();
	card.show();
}

void flip()
{
	roloObj.flip();
	view();
}

void add()
{
	
	Card card;
	//Card c;
	//Card c2;
	//Card c3;
	

	cout << "Input new card information: " << endl;
	string temp;

	getchar();
	cout << "      First name:";
	getline(cin, temp);
	card.set_fName(temp);
	
	cout << "       Last name:";
	getline(cin, temp);
	card.set_lName(temp);

	cout << "         Address:";
	getline(cin, temp);
	card.setAddress(temp);

	cout << "    Phone number:";
	getline(cin, temp);
	card.setPhone(temp);

	cout << "Occupation:";
	getline(cin, temp);
	card.soccupation(temp);

	roloObj.add(card);
}

void remove()
{
	Card card = roloObj.getCurrentCard();
	card.show();
	cout << "Remove this card? Enter Yes or No.";
	char answer;
	cin >> answer;
	if(answer == 'y' || answer == 'Y')
		roloObj.remove();
}

void search()
	{
	string srch;
	cout << "Enter the Last Name you want to search for: ";
	cin >> srch;
	roloObj.search(srch);
}

void modify()
{
	int answer;
	Card card = roloObj.getCurrentCard();
	do
	{	
		card.show();
		cout << "Choose the field to change:" << endl;
		cout << "1.First name" << endl;
		cout << "2.Last name" << endl;
		cout << "3.Address" << endl;
		cout << "4.Phone number" << endl;
		cout << "5.Occupation" << endl;
		cout << "6.Complete.  No more changes" << endl;
		cin >> answer;
		if(answer==6) break;
		string value;
		switch(answer)
		{
			case 1:cout << "First name:" << card.get_fName() << endl;
				cout << "Enter new first name:";
				cin >> value;
				card.set_fName(value);
				break;
			case 2:cout << "Last name:" << card.get_lName() << endl;
				cout << "Enter new last name:";
				cin >> value;
				card.set_lName(value);
				break;
			case 3:cout << "Address:" << card.getAddress() << endl;
				cout << "Enter new Address:";
				cin >> value;
				card.setAddress(value);
				break;
			case 4:cout << "Phone number:" << card.getPhone() << endl;
				cout << "Enter new phone number:";
				cin >> value;
				card.setPhone(value);
				break;
			case 5:cout << "Occupation:" << card.goccupation() << endl;
				cout << "Enter new occupation:";
				cin >> value;
				card.soccupation(value);
				break;
		}
	}
	while(true);

	roloObj.remove();
	roloObj.add(card);
}

void quit()
{
	exit(1);
}

int _tmain(int argc, _TCHAR* argv[])
{	
	
	Card card, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11;        //Creating Card Objects

	// list of "hard coded" contacts

	

	card.set_lName("Doe");
	card.set_fName("Jon");
	card.setAddress("123 Fake St, New York NY 00000");
	card.setPhone("212-555-5555");
	card.soccupation("Officer");
	roloObj.add(card);

	

	c2.set_lName("Hansen");
	c2.set_fName("Tony");
	c2.setAddress("12 E. St. NY, NY 33333 ");
	c2.setPhone("555-9999");
	c2.soccupation("Writer");
	roloObj.add(c2);

	c3.set_lName("Smyth");
	c3.set_fName("Jon");
	c3.setAddress("CMU Computer Services Pittsburgh, PA");
	c3.setPhone("555-1324");
	c3.soccupation("Computer Hardware");
	roloObj.add(c3);

	c4.set_lName("Heard");
	c4.set_fName("Alonza");
	c4.setAddress("123 Anyplace AveMalden, MA");
	c4.setPhone("555-5678");
	c4.soccupation("Mechanic");
	roloObj.add(c4);

	c5.set_lName("Reyes");
	c5.set_fName("Jen");
	c5.setAddress("325 Oak Rd Wilmington, MA");
	c5.setPhone("555-4950");
	c5.soccupation("Graphic Artist");
	roloObj.add(c5);

	c6.set_lName("Lupine");
	c6.set_fName("Alan");
	c6.setAddress("1 Bigelow Ave. Lawrence, Ma");
	c6.setPhone("555-7654");
	c6.soccupation("Vet");
	roloObj.add(c6);

	c7.set_lName("Proverb");
	c7.set_fName("Jewel");
	c7.setAddress("34 Washington St. Waltham, MA");
	c7.setPhone("555-3333");
	c7.soccupation("Graphic Artist");
	roloObj.add(c7);

	c8.set_lName("Revere");
	c8.set_fName("Paul");
	c8.setAddress("45 Commonwealth Ave. Boston MA");
	c8.setPhone("555-1776");
	c8.soccupation("Radical Revolutionary");
	roloObj.add(c8);

	c9.set_lName("Coors");
	c9.set_fName("Adolf");
	c9.setAddress("Boston MA");
	c9.setPhone("555-2337");
	c9.soccupation("Beer Maker");
	roloObj.add(c9);

	c10.set_lName("Papert");
	c10.set_fName("Seymour");
	c10.setAddress("MIT");
	c10.setPhone("555-1111");
	c10.soccupation("Lego Professor");
	roloObj.add(c10);

	c11.set_lName("Milton");
	c11.set_fName("Fred");
	c11.setAddress("12 Freedom Way. Nashua, NH");
	c11.setPhone("555-9981");
	c11.soccupation("Sales");
	roloObj.add(c11);

	


	int answer;
	do
	{
		cout << "Choose one of the following: " << endl;
		cout << "1. List" << endl;
		cout << "2. View" << endl;
		cout << "3. Flip" << endl;
		cout << "4. Add" << endl;
		cout << "5. Remove" << endl;
		cout << "6. Search" << endl;
		cout << "7. Modify" << endl;
		cout << "8. Quit" << endl;

		cin >> answer;
		if(answer == 8) break;

		switch(answer)
		{
			case 1: list();
				break;
			case 2: view();
				break;
			case 3: flip();
				break;
			case 4: add();
				break;
			case 5: remove();
				break;
			case 6: search();
				break;
			case 7: modify();
				break;
			default: quit();
				break;
		}
	}
	while(true);
	
	return 0;
}

